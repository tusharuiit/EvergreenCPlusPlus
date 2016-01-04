#include <iostream>
using namespace std ; 
void foo (int & x)
{
    cout << "address of x = " << &x << endl ; 
}
int main ()
{
    int a = 5  ;
    cout << "address of a = " << &a << endl ;
    foo (a);    
}
