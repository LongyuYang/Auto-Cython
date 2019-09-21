#include "Python.h"

void* uint2voidptr(unsigned long long e){
    return (void*)e;
}

unsigned long long voidptr2uint(void* a){
    return (unsigned long long)a;
}


void** py2voidptrptr(PyObject *o)
{
    void* a = o;
    return &a;
}





