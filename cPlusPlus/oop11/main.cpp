#include<iostream>
#include"man.hpp"
int main()
{
	girlfriend g1("Aish", 60);
	std::cout << g1.m_name << std::endl ;
	std::cout << g1.m_weight << std::endl ;

{
	man m1("Abhishek", &g1) ;

	std::cout << m1.m_name << std::endl ;
}

//	std::cout << 
	
//	std::cout << m1.girlfriend() << std::endl ;
}
