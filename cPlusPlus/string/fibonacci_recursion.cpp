#include<iostream>

int fibonacci(int num)
{
	if(num == 0)
	{
		return 1 ;
	}
	if(num == 1)
	{
		return 1 ;
	}
	return ( (fibonacci(num-1)) + (fibonacci(num-2)) );
}

int main()
{
//	1 1 2 3 5 8 13 21 34 55 89 144
	for(int index = 0 ; index < 15 ; index++)
	{
		std::cout << fibonacci(index) << std::endl ;
	}
}
