#include<iostream>
using namespace std;
class inputoutput
{
	private :
		int m_value_1 ;
		int m_value_2 ;
		int m_value_3 ;

	protected :

	public :
		int* getter(int* address) ;
		inputoutput(int a, int b, int c) ;

		friend std::ostream& operator<<( std::ostream& hello, const inputoutput& other)
		{
			hello << other.m_value_1 << " " << other.m_value_2 << " " << other.m_value_3 << endl ;
			return hello ;
		}

		friend std::istream& operator>>( istream& hello, inputoutput& other )
		{
			hello >> other.m_value_1 >> other.m_value_2 >> other.m_value_3 ;
			return hello ;
		}
};
