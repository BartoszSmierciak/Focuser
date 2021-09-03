#include <stdint.h>
#include <modbus/modbus.h>
#include "IG5A.h"
#include "IG5A_Drv.h"
#include "IG5A_F1.h"


IG5A_t* IG5A_new()
{
    return (IG5A_t*)mallock(sizeof(IG5A_t));
}

void IG5A_ctor(IG5A_t* IG5A, int address, modbus_t* ctx)
{
    IG5A->Drv = Drv_new();
    IG5A->F1 = F1_new();
    Drv_ctor(IG5A->Drv, ctx);
    Drv_ctor(IG5A->F1, ctx);
    IG5A->isRun = 0;
    IG5A->address = address;
}

void IG5A_dtor(IG5A_t* IG5A)
{
    //nothing to do
}

