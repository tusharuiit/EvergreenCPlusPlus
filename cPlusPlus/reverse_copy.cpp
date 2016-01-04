#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int  main()
{
	vector<int> v1({2 , 4 , 6, 8 });
	for( const auto& value : v1)
	{
		std::cout << value << std::endl ;
	}

	vector<int> v2(4) ;
	reverse_copy( begin(v1), end(v1), begin(v2));
	
	cout << endl ;

	for ( const auto& value : v2 )
	{
		std::cout << value << std::endl ;
	}
}
