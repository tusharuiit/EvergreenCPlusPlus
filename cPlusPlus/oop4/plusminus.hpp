#include<iostream>
class plusminus
{
	private :
		int m_value_1 ;
		int m_value_2 ;
	protected :

	public :
		plusminus();
		plusminus(int value_1, int value_2);
		~plusminus();

		plusminus(const plusminus& other);

//		plusminus& operator=(const plusminus& other);
//		plusminus& operator=(const plusminus other);

		int getter1();
		int getter2();

		void print();

//	The negation operator using friend functions
//		friend plusminus operator-(const plusminus& other)
//		{
//			plusminus temp1 ;
//			temp1.m_value_1 = -other.m_value_1 ;
//			temp1.m_value_2 = -other.m_value_2 ;
//			return temp1 ;
//		}

//		friend plusminus& operator-(const plusminus& other);

//	The negation operator using member function

		friend plusminus operator-(const plusminus& other)
		{
			plusminus temp1 ;
			temp1.m_value_1 = -other.m_value_1 ;
			temp1.m_value_2 = -other.m_value_2 ;
			return temp1 ;
		}

//
		friend plusminus operator-(const plusminus& other1, const plusminus& other2)
		{
			plusminus temp1 ;
			temp1.m_value_1 = other1.m_value_1 - other2.m_value_1 ;
			temp1.m_value_2 = other1.m_value_2 - other2.m_value_2 ;
			return temp1 ;
		}

		plusminus& operator+(const plusminus& other);

};
