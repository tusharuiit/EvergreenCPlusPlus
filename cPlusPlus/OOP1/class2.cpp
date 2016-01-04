#include"class2.hpp"

class2::class2(int value_beauty_index)
{
	m_beauty_index = value_beauty_index ;
}

//		getter function
int class2::getter1()
{
	return m_beauty_index ;
}

//		setter function
void class2::setter1(int value_beauty_index)
{
	m_beauty_index = value_beauty_index ;
}

