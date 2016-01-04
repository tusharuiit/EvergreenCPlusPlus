#include "person.h"


person::person()
{
 
}

person::person(name namevalue, height heightvalue)
{
	m_name = namevalue ;
        m_height = heightvalue ;
}

name& person::Getname()
{
	return m_name ;
}

void person::changename(const string& vorname, const string& familiename)
{
	m_name.change(vorname, familiename);
}

void person::printname()
{
	std::cout << m_name << std::endl ;
}
