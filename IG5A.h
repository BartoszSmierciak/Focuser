#include <stdint.h>
#include <modbus/modbus.h>
#include "IG5A_Drv.h"
#include "IG5A_F1.h"

typedef struct
{
    
    int isRun : 1;
    int address : 8;
    Drv_t* Drv;
    F1_t* F1;
    
}IG5A_t;

IG5A_t* IG5A_new();
void IG5A_ctor(IG5A_t* IG5A, int address);