#include<iostream>

#include"chimpanzee.hpp"
#include"human.hpp"

int main()
{
	mammal m1;
	std::cout << m1.alive << std::endl ;

	chimpanzee ch1 ;
	std::cout << ch1.alive << std::endl ;
	std::cout << ch1.isinzoo << std::endl ;
	
	human h1 ;
	std::cout << h1.alive << std::endl ;
	std::cout << h1.isathome << std::endl ;
}
