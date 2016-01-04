#include<iostream>
#include<set>

int main()
{
	std::set <int> set_names ;
	set_names.insert(9) ;
	set_names.insert(10) ;
	set_names.insert(4) ;
	set_names.insert(5) ;
	set_names.insert(55) ;
	set_names.insert(54) ;
	
	for(std::set<int>::iterator it = set_names.begin() ; it != set_names.end() ; it++)
	{
		std::cout << *it << std::endl ;
	}
}
