#include <stdint.h>
#include <modbus/modbus.h>
#include <errno.h>
#include <stdio.h>

int ModbusInit(modbus_t* ctx, const char *device, int baud, char parity, int data_bit, int stop_bit)
{
    
    uint32_t resTimeSec = 0;
    uint32_t resTimeuSec = 600000;

    ctx = modbus_new_rtu(device, baud, parity, data_bit, stop_bit);
    if (modbus_connect(ctx) == -1)
    {
        //fprintf(stderr, "Connection failed: %s\n", modbus_strerror(errno));
        modbus_close(ctx);
        modbus_free(ctx);
        return -1;
    }
    if (NULL == ctx)
    {
        //printf("Unable to create modbus context\n");
        modbus_close(ctx);
        modbus_free(ctx);
        return -2;
    }
    //printf("OK.\nCreated modbus context\n");
    /* Get response timeout */
    //modbus_get_response_timeout(ctx, &tv_sec, &tv_usec); 
    //printf("Default response timeout: %d sec %d usec \n", tv_sec, tv_usec );

    /* Set response timeout */
    modbus_set_response_timeout(ctx, resTimeSec, resTimeuSec); 
    //modbus_get_response_timeout(ctx, &tv_sec, &tv_usec); 
    //printf("Set response timeout:     %d sec %d usec \n", tv_sec, tv_usec );
    return 0;
}

int ModbusRead(modbus_t* ctx, int slaveAddress, int regAddress, uint16_t *reg)
{
    //Set the Modbus address of the remote slave
    int ans; 
    ans = modbus_set_slave(ctx, slaveAddress);
    if (ans == -1) 
    {
        fprintf(stderr, "Invalid slave ID: %s\n", modbus_strerror(errno));
        modbus_free(ctx);
        return -1;
    }
    ans = modbus_read_registers(ctx, regAddress, 1, reg);
    
    if (ans != 1)
    {
        fprintf(stderr, "Failed to read modbus. Num: %d, error: %s\n", ans, modbus_strerror(errno));
        return -2;
    }
    return 0;
}

int ModbusWrite(modbus_t* ctx, int slaveAddress, int regAddress, uint16_t value)
{
    int ans;
	
    ans = modbus_set_slave(ctx, slaveAddress);
    if (ans == -1) 
    {
        fprintf(stderr, "Invalid slave ID: %s\n", modbus_strerror(errno));
        modbus_free(ctx);
        return -1;
    }

    ans = modbus_write_register(ctx, regAddress, value);
    if (ans != 1)
    {
        return -2;
        printf("ERROR modbus_write_register (%d)\n", ans);
        //printf("Address = %d, value = %d (0x%X)\n", regAddress, value, value);
    }
    return 0;
}

void ModbusClose(modbus_t* ctx)
{
    modbus_close(ctx);
    modbus_free(ctx);
}

int Get2Registers(modbus_t* ctx, int slaveAddress, const uint16_t regAddressL, const uint16_t regAddressH, uint32_t *reg32)
{
    int ans;
    uint16_t reg16H = 0, reg16L = 0;
    ans = ModbusRead(ctx, slaveAddress, regAddressH, &reg16H);
    
    if (ans == -1) 
    {
        fprintf(stderr, "Invalid slave ID: %s\n", modbus_strerror(errno));
        modbus_free(ctx);
        return -1;
    }
    if (ans == -2)
    {
        fprintf(stderr, "Failed to read modbus. Num: %d, error: %s\n", ans, modbus_strerror(errno));
        return -2;
    }
    ans = ModbusRead(ctx, slaveAddress, regAddressL, &reg16L);
    if (ans == -1) 
    {
        fprintf(stderr, "Invalid slave ID: %s\n", modbus_strerror(errno));
        modbus_free(ctx);
        return -1;
    }
    if (ans == -2)
    {
        fprintf(stderr, "Failed to read modbus. Num: %d, error: %s\n", ans, modbus_strerror(errno));
        return -2;
    }
    uint32_t reg32H = reg16H;
    uint32_t reg32L = reg16L;
    *reg32 = (reg32H << 16) | reg32L;
    return 0;
}

int GetRegister(modbus_t* ctx, int slaveAddress, const uint16_t regAddress, uint16_t *reg16)
{
    int ans;
    ans = ModbusRead(ctx, slaveAddress, regAddress, reg16);
    if (ans == -1) 
    {
        fprintf(stderr, "Invalid slave ID: %s\n", modbus_strerror(errno));
        modbus_free(ctx);
        return -1;
    }
    if (ans == -2)
    {
        fprintf(stderr, "Failed to read modbus. Num: %d, error: %s\n", ans, modbus_strerror(errno));
        return -2;
    }
    return 0;
}
