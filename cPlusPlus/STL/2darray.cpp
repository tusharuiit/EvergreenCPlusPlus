#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector< vector<int> > matrix ;

//	number of columns = col
//	number of rows = row
	int row = 3 , col = 4 ;

	for( int row_number = 0 ; row_number < col ; row_number++ )	
	{
		matrix.push_back(vector<int> ({3 , 5 , 6 , 7}));
	}

	for( int row_number = 0 ; row_number < row ; row_number++ )
	{
		for(int col_number = 0 ; col_number < col ; col_number++)
		{
			std::cout << matrix[row_number][col_number] << " "  ;
		}
		std::cout << std::endl ;
	}
}
