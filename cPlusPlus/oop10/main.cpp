#include"person.h"
#include<iostream>

using namespace std;
int main()
{
	person p1(name("Tushar", "Upadhyay"), height(5,9));
	
	std::cout << p1.m_name.m_vorname << endl ;
	std::cout << p1.m_name.m_familiename << endl ;
	std::cout << p1.m_height.m_feet << endl ;
	std::cout << p1.m_height.m_inches << endl ;

	std::cout << p1.Getname() << std::endl ;

	p1.changename("Manisha", "Quorala") ;
	p1.printname() ;

//	std::cout << p1.Getname() << std::endl ;
}
