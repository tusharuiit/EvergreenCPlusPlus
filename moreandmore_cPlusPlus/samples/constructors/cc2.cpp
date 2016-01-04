#include<iostream>
using namespace std ;

int main ()
{
   int a = 6 , b = 5 ;
   int *c = &a , *d = &b ;
   *c = *d;
   cout << endl << a << endl ; 
}
