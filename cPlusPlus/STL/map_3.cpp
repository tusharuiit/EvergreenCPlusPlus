#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<int, string> map_1, float ;
	
	map_1.insert(make_pair(1, "Tushar", 5.5));
	map_1.insert(make_pair(2, "Abhishek", 6.5));
	map_1.insert(make_pair(3, "America", 7.5));
	map_1.insert(make_pair(4, "Trinidad", 8.5));
	map_1.insert(make_pair(5, "England", 9.5));

	map<int, string>::iterator it = map_1.begin();
	while(it != map_1.end())
	{
		std::cout << it->first << "=" << it->second << " with height = " << it-third << std::endl ;
		it++ ;
	}
}
