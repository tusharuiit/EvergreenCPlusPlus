#include <iostream>
#include <cmath> 
int main()
{
    //double x = 0.0;
    //double result ;
    //result = sin(x)/(x+1);
    double x = 0.0;
    //double result = (x == 0) | ( 1/x == 1.0) ? 1.0 : sin(x)/x ;
    double result = (x == 0) || ( 1/x == 1.0) ? 1.0 : sin(x)/x ;
    std::cout<<result<<std::endl;
}
