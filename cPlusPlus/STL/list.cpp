#include<iostream>
#include<list>

int main ()
{
	std::list<int> list_1 = {1,2,3,4,5} ;
	for(std::list<int>::iterator it = list_1.begin() ; it != list_1.end() ; it++)
	{
		std::cout << *it << std::endl ;
	}
}
