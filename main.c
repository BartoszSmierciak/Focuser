
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "Modbus_func.h"
#include "IG5A.h"

#define IG5A_ADDR     126
#define ENCODER_ADRR  127

#define MODBUS_PORT     "/dev/ttyUSB0"
#define MODBUS_BAUD     115200
#define MODBUS_PARITY   "N"
#define MODBUS_DATA_BIT 8
#define MODBUS_STOP_BIT 1

int main(void)
{
    int status = 0;

    modbus_t* ctx;
    ModbusInit(ctx, MODBUS_PORT, MODBUS_BAUD, MODBUS_PARITY, MODBUS_DATA_BIT, MODBUS_STOP_BIT);
    
    IG5A_t* IG5A = Drv_new();
    IG5A_ctor(IG5A, IG5A_ADDR , ctx);
    
    
    //destructors
    IG5A_dtor(IG5A);
    ModbusClose(ctx);
    return 0;
}