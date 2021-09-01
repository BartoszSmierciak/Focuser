
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "Drv.h"


int main(void)
{
    Drv_t* Drv = Drv_new();
    Drv_ctor(Drv);
    
    printf("%d\n",Drv->Registers->FrequencyCommand);
    
    uint16_t i = 0;
    int status = 0;
    
    Drv->FrequencyCommand(Drv,&i, &status);
    printf("%d, %d\n", i, status);
    Drv->AccelTime(Drv,&i,&status);
    printf("%d, %d\n", i, status);
    Drv_dtor(Drv);
    
    return 0;
}