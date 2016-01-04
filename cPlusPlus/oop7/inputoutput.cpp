#include"inputoutput.hpp"

int* inputoutput::getter(int* address)
{
	address[0] = m_value_1 ;
	address[1] = m_value_1 ;
	address[2] = m_value_1 ;
	return address ;
}

inputoutput::inputoutput(int a, int b, int c)
{
	m_value_1 = a ;
	m_value_2 = b ;
	m_value_3 = c ;
}


