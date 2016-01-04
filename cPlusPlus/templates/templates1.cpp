#include<iostream>

class dollars ;
class euros ;

template<typename T1, typename T2>
bool greater(T1 t1, T2 t2)
{
	return (t1>t2);	
}

class dollars
{
		int m_valueindollars ;
	public :

		dollars(int value)
		{
			m_valueindollars = value ;
		}
		friend bool operator>(const euros & e, const dollars & d);
};

class euros
{
	public :
		int m_valueineuros ;
		euros(int value)
		{
			m_valueineuros = value ;
		}
		friend bool operator>(const euros & e, const euros & d)
		{
			return ((e.m_valueineuros) > (d.m_valueineuros)) ;
		}
		friend bool operator>(const euros & e, const dollars & d)
		{
			return ((e.m_valueineuros) > (d.m_valueindollars)) ;
		}
};



int main(int argc, char *argv[])
{
	euros e1(55) ;
	euros e2(75) ;

	dollars d1(555) ;

	std::cout << greater(e1, e2) << std::endl ;

	std::cout << greater(e1, d1) << std::endl ;
}
