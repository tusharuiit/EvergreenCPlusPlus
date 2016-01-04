#include<iostream>

class a
{
	public :
		int d , b , c ;
		a(){};
};

int main()
{
	a a1 ;
	std::cout << a1.b << std::endl ;
	std::cout << sizeof(a) << std::endl ;
	std::cout << sizeof(a1) << std::endl ;
}
