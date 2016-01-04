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
   cout << "length of " << i << endl ;
}
 
int main()
{
   char *a="this is a test " ;
   char *b = a  ;
   //delete[] a ;
   computelength(b) ; 
}
