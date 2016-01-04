#include<iostream>
#include"./class1.hpp"
#include"class2.hpp"

int main()
{
	class1 class1object1(5) ;

	std::cout << class1object1.getter1() << std::endl ;

	class1object1.setter1(6) ;

	std::cout << class1object1.getter1() << std::endl ;

	std::cout << get_beauty(class1object1) << std::endl ;

//	class2 class2object1(13);

//	class1 class2object1 =  ;
}
