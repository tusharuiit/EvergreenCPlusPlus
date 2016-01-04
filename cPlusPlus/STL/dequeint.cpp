#include <iostream>
#include <deque>
#include<string>

using namespace std;
int main()
{
	std::deque<int> names ;
	names.push_back(4);
	names.push_back(5);
	names.push_back(6);
	names.push_front(3);
	names.push_front(2);
	names.push_front(1);
	for(size_t index  = 0 ; index < names.size() ; index++)
	{
		std::cout << names[index] << std::endl ;
	}
}
