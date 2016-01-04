#include<iostream>
#include"arith.hpp"

int main()
{
	arith a1(1);
	arith a2(2);

	std::cout << (a1 == a2) << std::endl ;
	std::cout << (a1 != a2) << std::endl ;
	std::cout << (a1 > a2) << std::endl ;
	std::cout << (a1 < a2) << std::endl ;
	std::cout << (a1 >= a2) << std::endl ;
	std::cout << (a1 <= a2) << std::endl ;
}
