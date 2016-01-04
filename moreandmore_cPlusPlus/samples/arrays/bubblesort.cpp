#include<iostream>
using namespace std  ;


int main()
{
   double matrix[4][4] ;
   for ( int i =0; i <4; i ++) 
   {
     for ( int j =0; j <4; j ++) 
     {
       matrix [i][j] = i == j ? 1.0:0.0;
     }
   }
   matrix[2][1] = 1.0;
   cout << "*matrix[10] = " << *(matrix[10]) << endl ;
   cout << "*(matrix+5) = " << **(matrix+5) << endl ;
}
