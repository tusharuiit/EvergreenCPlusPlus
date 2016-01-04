#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

int main()

{
	using namespace std;

	vector<int> v1(10) ;

//	for( size_t index = 0 ; index < 10 ; index++ )
//	{
//		int iSecret = (rand() % 10 + 1) * 100 ;
//		v1[index] = iSecret;
//	}

	for( vector<int>::iterator it = v1.begin() ; it != v1.end() ; it++ )
	{
		int iSecret = (rand() % 10 + 1) * 100 ;
		*it = iSecret ;
	}

	std::cout << std::endl ;

	for( vector<int>::iterator it = v1.begin() ; it != v1.end() ; it++ )
	{
		std::cout << *it << std::endl ;
	}

	std::cout << std::endl ;

	sort(v1.begin(), v1.end()) ;

	for( vector<int>::iterator it = v1.begin() ; it != v1.end() ; it++ )
	{
		std::cout << *it << std::endl ;
	}

	std::cout << std::endl ;

	reverse(v1.begin(), v1.end()) ;

	for( vector<int>::iterator it = v1.begin() ; it != v1.end() ; it++ )
	{
		std::cout << *it << std::endl ;
	}
}
