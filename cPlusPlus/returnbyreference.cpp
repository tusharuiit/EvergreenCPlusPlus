#include<iostream>

int& getdoubleofint( int & value )
{
	return value ;
}

int main()
{
	int a = 5345 ;
	std::cout << getdoubleofint (a) << std::endl ;
}
