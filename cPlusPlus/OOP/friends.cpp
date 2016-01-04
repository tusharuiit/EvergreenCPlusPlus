#include"class1.hpp"
#include"class2.hpp"

//		friend function
	friend int get_beauty(class1& object)
	{
		return object.m_beauty_index ;
	}
////		overloading the + operator, class1 + class2 should return class 1
//		friend class1 operator+( class1& object1, class1& object2 )
//		{
//			class1 temp ;
////			temp.m_beauty_index = object1.m_beauty_index + object2.m_beauty_index ;
////			return temp ;
//		}

