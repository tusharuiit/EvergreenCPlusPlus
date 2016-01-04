#include<iostream>
#include<cstring>
using namespace std;

int computelength(char * arr )
{
   int i = 0;
   while (arr[i] != 0)
   {
      i++;
   }
   cout << "length of " << i << endl ;
   return i+1 ;
} 
int main()
{
   char *a="this is a test " ;
   int l  = computelength(a) ; 
   char *b = new char[l + 1]  ;
   
   for (int i = 0 ; i<=l - 1 ; i ++) 
   {
      b[i] = a[i];
   }
   b[l] = '\0' ;
   cout << "a = " << a <<endl ;
   cout << "b = " << b <<endl ;
}
