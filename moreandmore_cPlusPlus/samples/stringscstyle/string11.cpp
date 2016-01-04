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
}
