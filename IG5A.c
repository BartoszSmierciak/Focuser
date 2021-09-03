#include <stdint.h>
#include "IG5A.h"
#include "IG5A_Drv.h"


IG5A_t* IG5A_new()
{
    return (IG5A_t*)mallock(sizeof(IG5A_t));
}

void IG5A_ctor(IG5A_t* IG5A, int address)
{
    IG5A->Drv = Drv_new();
    IG5A->F1 = F1_new();
    IG5A->isRun = 0;
    IG5A->address = address;
}

void IG5A_dtor(IG5A_t* IG5A)
{
    //nothing to do
}

