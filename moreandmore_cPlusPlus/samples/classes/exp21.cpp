#include <iostream>
using namespace std;
int main()
{
   const int *a ;
   int b = 5;
   const int *c = &b; 
   const int d  =  1 ; 
   const int *e = &d;
   const int f  =  1 ; 
   const int *g = &f;
   const int h  =  1 ; 
   g = &h;
   int i = 6 ; 
   g = &i;
   i = 7 ;    
 
   int const *j=&b; 
   j=&i;
   j=&h;
}
