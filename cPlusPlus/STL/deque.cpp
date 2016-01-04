#include <iostream>
#include <deque>
#include<string>

using namespace std;
int main()
{
	std::deque<std::string> names ;
	names.push_back(("d"));
	names.push_back("e");
	names.push_back("f");
	names.push_front("c");
	names.push_front("b");
	names.push_front("a");
	for(size_t index = 0; index < names.size() ; index++)
	{
		std::cout << names[index] << std::endl ;
	}
}
