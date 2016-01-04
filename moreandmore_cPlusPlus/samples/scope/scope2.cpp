#include <iostream>
using namespace std ; 
int main ()
{
    int a = 20 ; 
    {cout << "a = " << a << endl ;
     int a = 25 ;
     cout << "a 1 now is " << a << endl ;
     {cout << "a 2 now is " << a << endl ;}
     }
      
}
