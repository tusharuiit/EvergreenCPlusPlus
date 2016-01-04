#include<iostream>
using namespace std ;

int main()
{
  int a = 5 ;
  int c = 75 ; 
  const int * b = &a ;
  a = a+1;
  //*b = *b +22 ;
  b = &c;
  cout << *b << endl ;
}
