#include "regDrv.h"
#include "regF1.h"
#include "regF2.h"
#include "regIO.h"



typedef struct
{
    struct Drv_t* Drv;
    struct F1_t* F1;
    struct F2_t* F2;
    struct IO_t* IO;

}Reg_t;

Reg_t* Reg_new()
{
    return (Reg_t*)mallock(sizeof(Reg_t));
}

void Rec_ctor(Reg_t* Reg)
{
    Reg->Drv = Drv_new();
    Reg->F1 = F1_new();
    Reg->F2 = F2_new();
    Reg->IO = IO_new();

    Drv_ctor(Reg->Drv);
    F1_ctor(Reg->F1);
    F2_ctor(Reg->F2);
    IO_ctor(Reg->IO);
}

void Rec_dtor(Reg_t* Reg)
{
    Drv_dtor(Reg->Drv);
    F1_dtor(Reg->F1);
    F2_dtor(Reg->F2);
    IO_dtor(Reg->IO);

    free(Reg->Drv);
    free(Reg->F1);
    free(Reg->F2);
    free(Reg->IO);
}