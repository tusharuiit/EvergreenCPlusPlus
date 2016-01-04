#include"subscript.hpp"

int& subscript:: operator[](int index)
{
	return m_value[index] ;
}

int& subscript:: getter(int index)
{
	return m_value[index] ;
}
