#include <iostream>

using namespace std;


int main ()
{
   int b =5 ;
   int * const a = &b;
   *a= *a + 3;
   cout << b << endl;  
}
