#include<iostream>

int main()
{
	int a = 5 ;
	int & b = a ;
	auto c = b ;
	std::cout << c << std::endl ;
}
