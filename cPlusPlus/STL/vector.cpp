#include<iostream>
#include<vector>

int main()
{
	std::vector<int> v_int ;
	for(size_t index = 0 ; index < 10 ; ++index)
	{
		v_int.push_back(index * 2) ;
	}
	for(size_t index = 0 ; index < v_int.size() ; index++)
	{
		std::cout << v_int[index] << std::endl ;
	}
}
