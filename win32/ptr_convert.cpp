#include "Python.h"

void* uint2voidptr(unsigned int e){
    return (void*)e;
}

unsigned int voidptr2uint(void* a){
    return (unsigned int)a;
}


void** py2voidptrptr(PyObject *o)
{
    void* a = o;
    return &a;
}





