#include<iostream>
using namespace std;


int main()
{
   int max = 50 ;
   int a = 0 ; int b = 1 ; int c = a + b ;
   cout << a << "\t" << b << "\t" << "\t" ; 
   while (c < max)
   {
       cout << c << "\t" ;a = b ; b = c ;c = a + b ;  
   }
}
