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
   cout << &aa << "hola 2 "<< endl ;
   for (int i = 0 ; i<=l - 1 ; i ++) 
   {
      bb[i] = aa[i];
   }
   bb[l] = '\0' ;
} 
int main()
{
   char *a= new char[3];
   for (int i = 0 ; i <=2  ; i++)
   {
      a[i] = i+65;
   }
   cout << &a << "hola 1 "<< endl ;  
   int l = computelength(a) ; 
   char *b = new char[l+1] ;   
   copy (a , b , l) ; 
   
   cout << "a = " << a <<endl ;
   cout << "b = " << b <<endl ;
}
