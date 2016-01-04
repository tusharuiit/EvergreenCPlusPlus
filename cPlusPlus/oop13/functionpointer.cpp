#include<iostream>

int foo()
{
	std::cout << " I am in foo " << std::endl ;
}

int goo()
{
	std::cout << " I am in goo " << std::endl ;
}

void bar(int value)
{
	std::cout << " I am in bar , and value is " << value << std::endl ;
}

int main()
{
	int (*fp)() = foo ;
	fp();
	fp = goo ;
	fp() ;
	void (*fp1)(int) = bar;
	fp1(5);
}
