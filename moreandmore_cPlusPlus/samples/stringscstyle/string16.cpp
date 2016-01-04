#include<iostream>
#include<cstring>
using namespace std;

void computelength(char * arr )
{
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
   computelength (pchString); 
   //cout << &(pchString[0]) << "sexy 2" << endl ;
   cout << &pchString << "sexy 2" << endl ;
   char*anotherString = pchString ;
   cout << anotherString << "sexy 3" << endl ;
   computelength (anotherString);
   //cout << &(anotherString[0]) << "sexy 2" << endl ;
   cout << &anotherString << "sexy 4" << endl ; 
}
