#include "ig5a.h"

#include "ig5a_reg.h"

typedef struct
{
    int address;
    struct Fun_t* Fun;
    //struct Reg_t* Reg;
    
}Ig5a_t;

Ig5a_t* Ig5a_new()
{
    return (Ig5a_t*)mallock(sizeof(Ig5a_t));
}

void Ig5a_ctor(Ig5a_t* Ig5a, int address)
{
    Ig5a->Fun = Fun_new();
    Ig5a->address = address;
}