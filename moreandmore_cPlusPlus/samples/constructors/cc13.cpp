#include<iostream>
using namespace std ;

void foo (int & a)
{
  cout << a << endl ;
  if (a == 7)
  {
    a+=10 ; 
  }
}
int main ()
{
  int b = 5 ;
  foo (b);
  int f = 6;
  int &c = f ;
  foo (c);
  int d = 7 ;
  int *e = &d ;
  foo ( *e ) ;
  cout << *e << endl ;
}
