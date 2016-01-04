#include<iostream>
#include<vector>

int main()
{
	std::vector <char> char_vector_1 ;
	char_vector_1.push_back('1') ;
	char_vector_1.push_back('2') ;
	char_vector_1.push_back('3') ;

	for( std::vector<char>::iterator it = char_vector_1.begin() ; it != char_vector_1.end() ; it++ )
	{
		std::cout << *it << std::endl ;
	}
}
