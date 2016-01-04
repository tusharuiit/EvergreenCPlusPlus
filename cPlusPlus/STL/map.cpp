#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<int, string> map_1 ;
	
	map_1.insert(make_pair(1, "Tushar"));
	map_1.insert(make_pair(2, "Abhishek"));
	map_1.insert(make_pair(3, "America"));
	map_1.insert(make_pair(4, "Trinidad"));
	map_1.insert(make_pair(5, "England"));

	map<int, string>::iterator it = map_1.begin();
	while(it != map_1.end())
	{
		std::cout << it->first << "=" << it->second << std::endl ;
		it++ ;
	}
}
