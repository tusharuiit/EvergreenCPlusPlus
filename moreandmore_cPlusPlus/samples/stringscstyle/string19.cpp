#include<iostream>
#include<cstring>
using namespace std;
int computelength(char *arr)
{
   int i = 0 ;
   while (arr[i] != 0)
   {
      i++ ;
   }
   cout << "length of " << i << endl ;
   return i+1 ;
}

void copy(char *&aa, char*&bb ,int l )
{
   for (int i = 0 ; i<=l - 1 ; i ++) 
   {
      bb[i] = aa[i];
   }
   bb[l] = '\0' ;
}
 
int main()
{
   char *a="this is a test ";
   cout << "avv = " << a[1] <<endl ;
   int l = computelength(a) ; 
   char *b = new char[l+1] ;   
   copy (a , b , l) ; 
   
   cout << "a = " << a <<endl ;
   cout << "b = " << b <<endl ;
}
