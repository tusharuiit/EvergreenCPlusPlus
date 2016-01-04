#include<iostream>
using namespace std ;

int main ()
{
  int a = 5;
  int *const b = &a;
  int &c = a;
  cout << &a << endl ;
  cout << &c << endl ;
}
