#include"salary.h"

salary::salary(){}
salary::salary(int value)
{
	m_sal = value ;
}

salary::~salary()
{
}

salary::salary(const salary& other)
{}

salary& salary::operator=(const salary& other)
{
	return *this ;
}

void salary::printsalary(const salary& value)
{
	std::cout << value.m_sal << std::endl ;
}
