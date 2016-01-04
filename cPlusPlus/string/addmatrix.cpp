#include<iostream>

using namespace std ;

//	Allocate space for the matrix
int** allocate_space(int num_rows, int num_columns)
{
	int ** matrixname = new int*[num_rows];
	for(int index = 0 ; index < num_rows ; index++)
	{
		matrixname[index] = new int[num_columns] ;
	}
	return matrixname ;
}

//	Allocate space by pointer method
void allocate_space(int *** matrix, int num_rows, int num_columns)
{
	*matrix = new int*[num_rows] ;
	for(int index = 0 ; index < num_rows ; index++)
	{
		(*matrix)[index] = new int[num_columns] ;
	}
}


//	Initialize the matrix.
void initialize_matrix(int ** matrix, int num_rows, int num_columns)
{
	for(int index = 0; index < num_rows ; index++)
	{
		for(int index2 = 0 ; index2 < num_columns ; index2++)
		{
			matrix[index][index2] = index + index2 ;
		}
	}
}

//	Print the matrix (Pass by reference)
void print_matrix(int ** & matrix, int num_rows, int num_columns)
{
	for(int index = 0; index < num_rows ; index++)
	{
		for(int index2 = 0 ; index2 < num_columns ; index2++)
		{
			std::cout << matrix[index][index2] << " " ;
		}
		std::cout << "\n" ;
	}
}

//	Delete or free the space that you have created.
void delete_matrix(int ** matrix, int num_rows, int num_columns)
{
	for(int index = 0 ; index < num_rows ; index++)
	{
		delete[] matrix[index] ;
	}
	delete[] matrix ;
}

int main()
{
//	Create a 2 Dimensional Matrix

	cout << "Number of rows" << std::endl ;
	int num_rows = 0 ;
	cin >> num_rows ;

	cout << "Number of columns" << std::endl ;
	int num_columns ;
	cin >> num_columns ;

//	Allocating space for the matrix of ints
	int ** matrix ;
//	matrix = allocate_space( num_rows, num_columns);
	allocate_space(&matrix, num_rows, num_columns) ;

//	Initialize the matrix.
	initialize_matrix(matrix, num_rows, num_columns) ;

//	Print the matrix (Pass by reference)
	print_matrix(matrix, num_rows, num_columns) ;

//	Delete or free the space that you have created
	delete_matrix(matrix, num_rows, num_columns);
}
