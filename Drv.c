#include "Drv.h"

#include <stdlib.h>


Drv_t* Drv_new()
{
    return (Drv_t*)malloc(sizeof(Drv_t));
}

void* __FrequencyCommand(void* Drv, uint16_t* value, int* status)
{
    Drv_t* _Drv = (Drv_t*)Drv;
    *value = _Drv->regDrv->FrequencyCommand;
    *status = 0;
}

void* __AccelTime(void* Drv, uint16_t* value, int* status)
{
    Drv_t* _Drv = (Drv_t*)Drv;
    *value = _Drv->regDrv->AccelTime;
    status = 0;
}

void Drv_ctor(Drv_t* Drv)
{
    Drv->regDrv = regDrv_new();
    regDrv_ctor(Drv->regDrv);
    Drv->FrequencyCommand = __FrequencyCommand;
    Drv->AccelTime = __AccelTime;
}

void Drv_dtor(Drv_t* Drv)
{
    regDrv_dtor(Drv->regDrv);
    free(Drv->regDrv);
}