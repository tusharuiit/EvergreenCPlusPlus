#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	using namespace std;
	vector<int> vector_1 ;

	for(size_t index = 0 ; index < 10 ; index++)
	{
		vector_1.push_back(index);
	}

	for(vector<int>::iterator it = vector_1.begin() ; it != vector_1.end() ; it++ )
	{
		cout << *it << endl ;
	}

	vector<int>::iterator it_const = find ( vector_1.begin(), vector_1.end(), 5 );

	vector_1.insert( it_const , 5555);
	std::cout << std::endl ;

	for(vector<int>::iterator it = vector_1.begin() ; it != vector_1.end() ; it++ )
	{
		cout << *it << endl ;
	}
}
