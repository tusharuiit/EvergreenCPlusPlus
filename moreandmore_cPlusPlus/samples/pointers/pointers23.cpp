#include<iostream>
using namespace std ; 

int main()
{
   int * p ;
   for (int i = 0 ; i < 2 ; i++)
   {
      int a = 2 * i ;
      p=&a ;
   }
   //cout << a << endl ;
   cout << *p << endl ; // sometimes works 
}
