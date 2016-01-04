#include<iostream>
#include"subscript.hpp"

int main()
{
	subscript s1 ;

	std::cout << s1[5] << std::endl ;
	s1[5] = 555 ;
	std::cout << s1[5] << std::endl ;
	s1.getter(5) = 666 ;
	std::cout << s1[5] << std::endl ;
}
