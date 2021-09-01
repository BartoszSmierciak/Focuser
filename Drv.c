#include "Drv.h"

#include <stdlib.h>


Drv_t* Drv_new()
{
    return (Drv_t*)malloc(sizeof(Drv_t));
}

void* __FrequencyCommand(void* Drv, uint16_t* value, int* status)
{
    Drv_t* _Drv = (Drv_t*)Drv;
    *value = _Drv->Registers->FrequencyCommand;
    *status = 0;
}

void* __AccelTime(void* Drv, uint16_t* value, int* status)
{
    Drv_t* _Drv = (Drv_t*)Drv;
    *value = _Drv->Registers->AccelTime;
    status = 0;
}

void Drv_ctor(Drv_t* Drv)
{
    Drv->Registers = regDrv_new();
    regDrv_ctor(Drv->Registers);
    Drv->FrequencyCommand = __FrequencyCommand;
    Drv->AccelTime = __AccelTime;
}

void Drv_dtor(Drv_t* Drv)
{
    regDrv_dtor(Drv->Registers);
    free(Drv->Registers);
}