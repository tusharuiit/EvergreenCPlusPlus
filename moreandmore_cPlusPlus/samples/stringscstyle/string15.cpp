#include<iostream>
#include<cstring>
using namespace std;

void goo(char *b )
{
   cout << &b <<  " sexy2" << endl ;
   cout << *b <<  " sexy3" << endl ;
   b++;
   cout << *b <<  " sexy4" << endl ;
}
 
int main()
{   
   char a[2] = {'H' , 'h'} ;
   goo(a) ;
   cout << &a <<  " sexy1" << endl ; 
}
