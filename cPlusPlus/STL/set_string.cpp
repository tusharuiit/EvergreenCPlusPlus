#include<iostream>
#include<set>

int main()
{
	std::set <std::string> set_names ;
	set_names.insert("Hello") ;
	set_names.insert("Aala") ;
	set_names.insert("Monday") ;
	set_names.insert("Monali") ;
	set_names.insert("Aishwarya") ;
	set_names.insert("Salman") ;
	
	for(std::set<std::string>::iterator it = set_names.begin() ; it != set_names.end() ; it++)
	{
		std::cout << *it << std::endl ;
	}
}
