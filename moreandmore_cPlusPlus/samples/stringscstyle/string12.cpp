#include<iostream>
#include<cstring>
using namespace std;

void computelength(char * arr )
{
   cout << &(arr[0]) << " sexy 2 " << endl ;
   cout << &arr[0] << " sexy 4 " << endl ;
   int i = 0;
   while (arr[i] != 0)
   {
     i++;
   }
   cout << i << endl ;
}
 
int main()
{
   char *pchString="Hallo";
   cout << &(pchString[0]) << " sexy 1 "<< endl ; 
   cout << &pchString[0] << " sexy 3 "<< endl ; 
   computelength (pchString);  
}
