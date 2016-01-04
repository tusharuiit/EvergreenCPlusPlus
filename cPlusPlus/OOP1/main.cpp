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

	class1 class1object2(13);

	class1 class1object3 = class1object1 + class1object2 ;

	std::cout << class1object3.getter1() << std::endl ;

	std::cout << (class1object1 + class1object2).getter1() << std::endl ;
}
