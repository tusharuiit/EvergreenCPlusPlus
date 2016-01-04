#include<iostream>
#include"plusminus.hpp"

int main()
{
	plusminus obj1(4, 7) ;
	std::cout << "Printing obj1" << std::endl ;
	obj1.print();

//	-obj1 ;
//	std::cout << "Printing obj1" << std::endl ;
//	std::cout << obj1.getter1() << " " << obj1.getter2() << " " << std::endl ;
//	obj1.print();

	plusminus obj2(5, 1) ;
	std::cout << "Printing obj2" << std::endl ;
	obj2.print();
	
	
	std::cout << "Printing obj1 + obj2" << std::endl ;
	(obj1 + obj2).print();

	std::cout << "Printing obj1" << std::endl ;
	(obj1).print();

//	std::cout << "Printing obj3 - obj4" << std::endl ;
//	plusminus obj3(5 , 10);
//	plusminus obj4(10 , 10);
//	(obj3 - obj4).print() ;
	
	plusminus obj5(44, 23);
	plusminus obj6(11, 22);
	plusminus obj7(0, 0);

	obj7 = (obj5 - obj6) ;
	std::cout << "Printing obj7" << std::endl ;
	obj7.print();

	plusminus obj8 = -obj6 ;
	std::cout << "Printing obj8" << std::endl ;
	obj8.print();

	//	std::cout << "Printing -obj1" << std::endl ;
//	std::cout << -obj1.getter1() << " " << -obj1.getter2() << std::endl ;
//	(-obj1).print();
//	std::cout << std::endl ;

//	plusminus obj2 ;
//	obj2 = -obj1 ;
//	plusminus obj3 = -obj1 ;

//	std::cout << "Printing obj1" << std::endl ;
//	std::cout << obj1.getter1() << " " << obj1.getter2() << std::endl ;
//	std::cout << std::endl ;


//	std::cout << "Printing obj3" << std::endl ;
//	std::cout << obj3.getter1() << " " << obj.getter2() << std::endl ;
//	std::cout << std::endl ;
}
