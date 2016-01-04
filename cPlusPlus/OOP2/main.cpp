#include"matrix.h"
#include<iostream>
int main()
{
	matrix m1 ;
	m1.initialize();
	m1.print();

	m1(2,3) = 4444;

	std::cout << std::endl ;

	m1.print();
}
