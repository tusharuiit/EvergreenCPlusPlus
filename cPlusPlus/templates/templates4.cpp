#include<iostream>
using namespace std;
template <typename T1, int size>
class Array
{
	private :
		T1 m_array[size] ;
	public :
		void print1()
		{
			for (int index = 0 ; index < size ; index++)
			{
				std::cout << m_array[index] << std::endl ;
			}
		}
};

int main()
{
	Array<int, 10> a1 ;
	a1.print1()  ;
}
