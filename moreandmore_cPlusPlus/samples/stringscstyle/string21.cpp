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
void copy(char **aa, char**bb ,int l )
{
   cout << aa << "hola 5 "<< endl ;
   cout << *aa << "hola 6 "<< endl ;
   cout << **aa << "hola 7 "<< endl ;
   cout << aa[0] << "hola 8 "<< endl ;
   cout << *aa[0] << "hola 9 "<< endl ;
   //bb[0] = aa[0] ; THIS ALSO WORKS  !!!
   *bb = *aa ;
   cout << bb << "hola 10 "<< endl ;
   cout << aa << "hola 11 "<< endl ;
   /*for (int i = 0 ; i<=l - 1 ; i ++) 
   {
      *bb[i] = *aa[i];
   }
   *bb[l] = '\0' ;*/
} 
int main()
{
   char *a= new char[3];
   for (int i = 0 ; i <=2  ; i++)
   {
      a[i] = i+65;
   }
   cout << &a << "hola 1 "<< endl ; 
   cout << *a << "hola 3 "<< endl ; 
   cout << a << "hola 4 "<< endl ; 
   int l = computelength(a) ; 
   char *b = new char[l+1] ;   
   copy (&a , &b , l) ; 
   cout << &a << "hola 12 "<< endl ; 
   cout << &b << "hola 13 "<< endl ; 
   cout << "a = " << a <<endl ;
   //delete[] a ; 
   cout << "b = " << b <<endl ;
   delete[] b ;
   cout << "a = " << a <<endl ;
}
