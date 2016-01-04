#include<iostream>
#include"prefix.hpp"

int main()
{
	prefix obj1(5);
	++obj1 ;
	std::cout << obj1.getter() << std::endl ;

	prefix obj2(11);
	obj2-- ;
	std::cout << obj2.getter() << std::endl ;

	prefix obj3 = obj2-- ;
	std::cout << obj3.getter() << std::endl ;

	obj3 = obj1-- ;
	std::cout << obj3.getter() << std::endl ;
}
