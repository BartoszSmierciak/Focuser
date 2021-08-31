#include <stdint.h>

struct IO_t;

struct IO_t* IO_new();

void IO_ctor(struct IO_t*);

void IO_dtor(struct IO_t*);
