
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "Modbus_func.h"
#include "IG5A.h"

#define IG5A_ADDR     126
#define IG5A_PORT     "/dev/ttyUSB0"
#define IG5A_BAUD     115200
#define IG5A_PARITY   "N"
#define IG5A_DATA_BIT 8
#define IG5A_STOP_BIT 1

int main(void)
{
    int status = 0;

    modbus_t* ctx;
    ModbusInit(ctx, IG5A_PORT, IG5A_BAUD, IG5A_PARITY, IG5A_DATA_BIT, IG5A_STOP_BIT);
    
    IG5A_t* IG5A = Drv_new();
    IG5A_ctor(IG5A, IG5A_ADDR);
    
    //printf("%d\n",Drv->Registers->FrequencyCommand);
    
    
    
    
    //Drv->FrequencyCommand(Drv,&i, &status);
    //printf("%d, %d\n", i, status);
    //Drv->AccelTime(Drv,&i,&status);
    //printf("%d, %d\n", i, status);
    IG5A_dtor(IG5A);
    ModbusClose(ctx);
    return 0;
}