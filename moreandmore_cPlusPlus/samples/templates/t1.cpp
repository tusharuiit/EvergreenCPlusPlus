#include<iostream>
//using namespace std;

template <typename Type> // this is the template parameter declaration
Type max1(Type tX, Type tY)
{
    return (tX > tY) ? tX : tY;
    
}

int main ()
{
   std::cout << max1(3, 7)<<std::endl; // calls max(int, int)
   
}
