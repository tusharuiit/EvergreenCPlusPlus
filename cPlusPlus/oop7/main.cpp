#include"inputoutput.hpp"
#include<iostream>

int main()
{
	inputoutput obj1(2,4,6);
	std::cout << obj1 ;

	inputoutput obj2(3,6,9);
	std::cout << obj2 ;

	std::cin >> obj2 ;
	std::cout << obj2 ;
}
