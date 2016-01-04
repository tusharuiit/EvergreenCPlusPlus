#include<iostream>
using namespace std ;

int main ()
{
   char c[5] = "hell" ; 
   //c[4] = '\0';
   c[3] = 'e';
   cout << c << endl ;
   cout << c[4] << endl ; 
}
