#include "deepshallow.h"
#include<iostream>

//deepshallow::deepshallow()
//{
//    //ctor
//}

deepshallow::deepshallow(int sizewa, int value)
{
    m_value = sizewa ;
    m_dynamic_value = new int[sizewa];
    for(int index = 0 ; index < sizewa ; index++)
    {
        m_dynamic_value[index] = index*10 ;
    }
}

deepshallow::~deepshallow()
{
    delete[] m_dynamic_value ;
}

void deepshallow::print()
{
    std::cout << "1 = " << m_dynamic_value[0] << std::endl;
    std::cout << "2 = " << m_dynamic_value[1] << std::endl;
    std::cout << "3 = " << m_dynamic_value[2] << std::endl;
    std::cout << "Done !!" << std::endl ;
}

deepshallow::deepshallow(const deepshallow& other)
{
    m_dynamic_value = new int[other.m_value];
    for(int index = 0 ; index < other.m_value ; index++)
    {
        m_dynamic_value[index] = other.m_dynamic_value[index];
    }
}

deepshallow& deepshallow::operator=(const deepshallow& rhs)
{
    if (this == &rhs) return *this;
   m_dynamic_value = new int[rhs.m_value];
    for(int index = 0 ; index < rhs.m_value ; index++)
    {
        m_dynamic_value[index] = 13;
    }
    return *this;
}
