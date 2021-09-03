#include <modbus/modbus.h>
#include <stdint.h>

int ModbusInit(modbus_t* ctx, const char *device, int baud, char parity, int data_bit, int stop_bit);
int ModbusRead(modbus_t* ctx, int slaveAddress, int regAddress, uint16_t *reg);
int ModbusWrite(modbus_t* ctx, int slaveAddress, int regAddress, uint16_t value);
void ModbusClose(modbus_t* ctx);
int Get2Registers(modbus_t* ctx, int slaveAddress, const uint16_t regAddressL, const uint16_t regAddressH, uint32_t *reg32);
int GetRegister(modbus_t* ctx, int slaveAddress, const uint16_t regAddress, uint16_t *reg16);