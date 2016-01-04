#include<iostream>

int factorial(int num)
{
	if(num == 1)
		return 1;
	return (num * factorial(num - 1));
}

int main()
{
	int num = 4 ;
	std::cout << factorial(num) << std::endl ;
}
