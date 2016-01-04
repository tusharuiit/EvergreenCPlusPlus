#include <iostream>
using namespace std ;
void foo (double a , double b)
{
   cout << "i l u 1 " << endl ;
} 
void foo (int a , int b)
{
   cout << "i l u 2 " << endl ; 
}
int main ()
{
    foo(3.5 , 4.0); 
}
