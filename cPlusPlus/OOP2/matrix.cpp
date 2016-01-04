#include"matrix.h"
#include<iostream>

matrix::matrix(){}

matrix::~matrix(){}

matrix::matrix(const matrix& other){}
matrix& matrix::operator=(const matrix& other){return *this ;}

int matrix::getter(int row, int col){return m_value[row][col];}
int matrix::setter(int row, int col, int value){m_value[row][col] = value ;}

void matrix::print()
{
	for (int row_number = 0 ; row_number < 4 ; row_number++)
	{
		for(int col_number = 0 ; col_number < 5 ; col_number++)
		{
			std::cout << m_value[row_number][col_number] << " " ;
		}
		std::cout << std::endl ;
	}
}

void matrix::initialize()
{
	for (int row_number = 0 ; row_number < 4 ; row_number++)
	{
		for(int col_number = 0 ; col_number < 5 ; col_number++)
		{
			m_value[row_number][col_number] = row_number + col_number ;
		}
	}
}


int& matrix::operator()(int row, int col)
{
	return m_value[row][col];
}
