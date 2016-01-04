#include<iostream>
#include<cstring>
using namespace std;

void computelength(char **arr )
{
   int i = 0;
   cout << *arr << "sexy 1 " << endl ;//address
   cout << &arr << "sexy 2 " << endl ;
   cout << arr << "sexy 3 " << endl ;
   cout << arr[0] << "sexy 5 " << endl ;
   cout << *arr[0] << "sexy 9 " << endl ;
   cout << **arr << "sexy 6 " << endl ;//address
   (*arr)++;
   cout << **arr << "sexy 8 " << endl ;//address
   while (**arr != 0)
   {
     i++;
     (*arr)++;
   }
   cout << "length = " << i << endl ;
}
 
int main()
{
   char *pchString="Hallo ";
   cout << pchString << " sexy 9 " << endl ; 
   cout << &pchString << " sexy 7 " << endl ; 
   computelength (&pchString);  
   char * anotherString = pchString ;
   cout << &anotherString << " sexy 9 " << endl ; 
   cout << anotherString << " sexy 10 " << endl ;
   cout << *anotherString << " sexy 11 " << endl ; 
   char  a[2]={'H' , 'h'};
   cout << a[0] << a[1] << endl ;
   char *b= a ;
   cout << &a << " sexy 12 "<< endl ;
   cout << &b << " sexy 13 "<< endl ;
}
