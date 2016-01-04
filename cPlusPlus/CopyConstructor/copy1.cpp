#include "copy1.h"

Copy1::Copy1()
{
    //ctor
}

Copy1::~Copy1()
{
    //dtor
}

Copy1::Copy1(const Copy1& other)
{
    //copy ctor
}

Copy1& Copy1::operator=(const Copy1& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
