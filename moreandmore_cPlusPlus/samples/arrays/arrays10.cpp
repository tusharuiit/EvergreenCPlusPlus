#include<iostream>
using namespace std  ;

double* createThreeRandomGrades() 
{
  double* result = new double [3] ;
  cout << "result = " << result << endl ;
  result [0] = 1.3; result [1] = 2.7; result [2] = 1.0;
  return result ;
}


int main()
{
   double *p = createThreeRandomGrades() ;
   cout << "p[0] = " << p[0] << endl ;
   cout << "p = " << p << endl ;
   delete[] p ;
}
