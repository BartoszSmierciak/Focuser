#include "Drv.h"
#include "DrvReg.h"
#include <stdlib.h>


void Drv_FrequencyCommand(modbus , uint16_t* value, int* status)
{
    
    *value = modbusRead(Drv_FrequencyCommand);
    *status = 0;
}

void Drv_AccelTime(modbus, uint16_t* value, int* status)
{
    *value = Drv_AccelTime;
    status = 0;
}

