#include<iostream>
using namespace std ;

int main()
{
  int a = 5 ;
  int c = 75 ; 
  //const * int b = &a ;
  int const *b = &a ;
  cout << *b << endl ;
  a = a + 10 ;
  // *b = *b + 10 ;
  cout << *b << endl ;
  b = &c ;
  cout << *b << endl ;
}
