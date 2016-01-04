#include<iostream>
using namespace std  ;
int main()
{
  int gradesBSc , gradesMSc[5] ;
  //gradesMSc[5] = 2.3;
  gradesMSc[5] = 2.3 ;
  gradesMSc[3] ++ ;
  int * p0 = gradesMSc;
  cout << "p0 = " << p0 << endl ;
  int * p1 = &gradesMSc[0];
  cout << "p1 = " << p1 << endl ;
  int * p2 = &gradesMSc[1];
  cout << "p2 = " << p2 << endl ;
  cout << "p1 + 1  = " << p1 + 1 << endl ;
  cout << "++p1  = " << ++p1 << endl ;
  //gradesMSc++ ;
  p2 ++ ;
  cout << "p2  = " << p2 << endl ;
}
