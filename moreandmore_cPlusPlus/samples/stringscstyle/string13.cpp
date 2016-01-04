#include<iostream>
#include<cstring>
using namespace std;

void computelength(char * arr )
{
   cout << &arr << " sexy 2 " << endl ;
   cout << arr << " sexy 3 " << endl ;
   cout << *arr << " sexy 4 " << endl ;
   cout << arr[0] << " sexy 5 " << endl ;
}
 
int main()
{
   char *pchString="Hallo";
   cout << &pchString << " sexy 1 "<< endl ; 
   computelength (pchString);
}
