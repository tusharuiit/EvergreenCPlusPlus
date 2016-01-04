#include<iostream>
using namespace std;

class rupees ;

template <class T>
T Average(T *atArray, int nNumValues)
{
    T tSum = 0;
    for (int nCount=0; nCount < nNumValues; nCount++)
        tSum += atArray[nCount];
 
    tSum /= nNumValues;
    return tSum;
}

class rupees
{
	public :
		int m_value ;
		rupees(int value)
		{
			m_value = value ;
		}

		rupees& operator+=(const rupees & other)
		{
			m_value += other.m_value ;
			return *this ;
		}

		rupees& operator/=(const rupees & other)
		{
			m_value /= other.m_value ;
			return *this ;
		}

		friend ostream& operator<<(ostream& hello, const rupees & r)
		{
			hello << r.m_value ;
			return hello ;
		}
};

int main()
{
	int a[] = {1,2,3,4,5} ;
	std::cout << Average(a, 5) << std::endl ;

	double b[] = {1.5, 2.5, 3.5, 4.5, 5.5} ;
	std::cout << Average(b, 5) << std::endl ;	

	rupees r[] = {rupees(3), rupees(4), rupees(5), rupees(6), rupees(7)};
	std::cout << Average(r, 5) << std::endl ;
}
