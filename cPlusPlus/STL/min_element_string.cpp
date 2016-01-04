#include<iostream>
#include<list>
#include<algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	list<string> list_1 ;
//	for( size_t index = 0 ; index < 10 ; index++ )
//	{
//		  /* generate secret number between 1 and 10: */
//		float iSecret = 11.2345 * ( rand() % 10 + 1 );
//		list_1.push_back(to_string(round(iSecret))) ;
//	}

	list_1.push_back("Abhishek");
	list_1.push_back("tushar");
	list_1.push_back("tuthar");
	list_1.push_back("Nyash");
	list_1.push_back("Pallavi");
	list_1.push_back("sunny");
	list_1.push_back("Bharar");

	// print the list
	for( list<string>::iterator it = list_1.begin() ; it != list_1.end() ; it++ )
	{
		std::cout << *it << std::endl ;
	}

	// print the minimum element
	std::cout << "The least element is " << std::endl ;
	std::cout << *(min_element(list_1.begin(), list_1.end())) << std::endl ;
	std::cout << "The max element is " << std::endl ;
	std::cout << *(max_element(list_1.begin(), list_1.end())) << std::endl ;
}
