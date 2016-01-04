#include<iostream>
#include<vector>
#include<string>

int main()
{
	std::vector<int> v(5) ;
	for(auto x : v)
	{
		std::cout << x << std::endl ;
	}

	std::string a = "12345" ;
	for(auto x : a)
	{
		std::cout << x << std::endl ;
	}

static_assert(__cplusplus > 199711L, "Program requires C++11 capable compiler");
}
