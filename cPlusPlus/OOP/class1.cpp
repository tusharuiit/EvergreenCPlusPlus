#include"class1.hpp"

class1::class1(int value_beauty_index)
{
	m_beauty_index = value_beauty_index ;
}

//		getter function
int class1::getter1()
{
	return m_beauty_index ;
}

//		setter function
void class1::setter1(int value_beauty_index)
{
	m_beauty_index = value_beauty_index ;
}

