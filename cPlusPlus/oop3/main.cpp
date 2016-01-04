#include"overloadtypecast.h"
#include<iostream>

// We cast a class to a floating point value

int main()
{
	person person1(2.5) ;

//	person person2(3.5) ;

//	std::cout << person2.getter() << std::endl ;

//	person2.setter(person1) ;

//	std::cout << person2.getter() << std::endl ;

//	std::cout << static_cast<float>(2) << std::endl ;
//	std::cout << static_cast<float>(person2) << std::endl ;

	salary salary1(1000);

//	salary salary2(person1);

	salary1.printsalary(person1);
}
