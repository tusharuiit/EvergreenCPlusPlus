#include<iostream>

using namespace std;

template<typename T>
class Array
{
	private :
		int m_size ;
		static const int num = 12;
		T m_array[m_size];
	public :
		Array(int number)
		{
			m_number = number ;
		}

		T& operator[](int ncount)
		{
			return m_array[ncount] ;
		}

};

int main()
{
	Array<int> anArray(12);
	Array<double> adArray(12);

	for (int nCount = 0; nCount < 12; nCount++)
	{
		anArray[nCount] = nCount;
		adArray[nCount] = nCount + 0.5;
	}

	for (int nCount = 11; nCount >= 0; nCount--)
		std::cout << anArray[nCount] << "\t" << adArray[nCount] << std::endl;
 
	return 0;
}
