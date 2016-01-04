#include"plusminus.hpp"

plusminus::plusminus()
{}
plusminus::plusminus(int value_1, int value_2)
{
	m_value_1 = value_1 ;
	m_value_2 = value_2 ;
}

plusminus::~plusminus()
{}

plusminus::plusminus(const plusminus& other)
{}

//plusminus& plusminus::operator=(const plusminus& other)
//{
//	m_value_1 = other.m_value_1 ;
//	m_value_2 = other.m_value_2 ;
//	return *this;
//}

int plusminus::getter1()
{
	return m_value_1 ;	
}
int plusminus::getter2()
{
	return m_value_2 ;	
}

void plusminus::print()
{
	std::cout << m_value_1 << " " << m_value_2 << std::endl ;
}

plusminus& plusminus::operator+(const plusminus& other)
{
	m_value_1 = m_value_1 + other.m_value_1 ;
	m_value_2 = m_value_2 + other.m_value_2 ;
	return *this ;
}
