#include"prefix.hpp"

prefix::prefix(){}
prefix::~prefix(){}
prefix::prefix(int value)
{
	m_value = value ;
}

prefix::prefix(const prefix& other)
{
}

//prefix& prefix::operator=(const prefix& other)
//{
//}

int prefix::getter()
{
	return m_value ;
}

prefix& prefix::operator++()
{
	m_value++ ;
	return *this ;
}

prefix prefix::operator--(int)
{
	prefix temp1 ;
	temp1 = *this ;
	m_value-- ;
	return temp1 ;	
}

