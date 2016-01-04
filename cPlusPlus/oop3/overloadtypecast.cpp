#include"overloadtypecast.h"
#include<iostream>
#include<cmath>

person::person(){}

person::person(float height){m_height = height ;}

person::~person(){}

person::person(const person& other)
{
}

person& person::operator=(const person& other)
{
	return *this ;
}

float person::getter()
{
	return m_height ;
}

void person::setter(float value)
{
	m_height = value ;
}

person::operator float()
{
	std::cout << "in typecasting function" << std::endl ;
	return m_height ;
}

person:: operator salary()
{
	return salary(round(m_height)* 1000);
}
