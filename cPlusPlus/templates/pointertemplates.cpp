#include<iostream>

template<typename T>
class A
{
	public :
		T m_var ;
		A(int val)
		{
			m_var = val ;
		}
		
};

template<typename T >
class A<T*>
{
	public :
		T * m_var ;
		A(int val)
		{
			m_var = new T[5] ;
			m_var[3] = val ;
		}
		
		~A()
		{
			delete[] m_var ;
		}
};

int main()
{
	A<int> a(5) ;
	std::cout << a.m_var << std::endl ;

	A<int * > b(55);
	std::cout << b.m_var[3] << std::endl ;
}
