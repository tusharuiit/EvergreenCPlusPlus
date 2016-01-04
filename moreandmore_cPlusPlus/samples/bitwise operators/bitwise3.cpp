#include <iostream>
#include <cmath> 
using namespace std  ;
int main()
{
    int a , b = 2 ; 
    
    cout << " a = " << a << endl ;
    cout << "b = " << b << endl ;
    double c = 10/4 ;
    cout << "c = " << c << endl ;
    
    int d = 4 ;
    bool e = (d = 5 ) ; 
    cout << "e = " << e << endl ;
    cout << "d = " << d << endl ;
    cout << "sizeof(unsigned int) " << sizeof(unsigned int) << endl ;
    
    unsigned int u = 0 ;
    int i = -5  ;
    u = i ; 
    cout << "u = " << u << endl ;
    
    u = 2^30 ; 
    cout << "u = " << u << endl ;
    
    double a2 = 3.0 ; int b2 = 4 ; 
    //auto c2 = a2 + b2 ;
    auto c2 = 5.5 ;
    
}
