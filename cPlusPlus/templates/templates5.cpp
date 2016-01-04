#include<iostream>

using namespace std;

template <typename T1>
class Array
{
	private :
		T1 m_var ;
	public :
		Array(int val)
		{
			m_var = val ;
		}
		void print1()
		{
			std::cout << m_var << std::endl ;
		}
};

//template <>
//void Array<float>::print1()
//{
//	std::cout << std::scientific << m_var << std::endl ;
//}

int main()
{
	Array<int> a1(5) ;
	a1.print1()  ;
	Array<float> a2(5.6) ;

	a2.print1();
}
