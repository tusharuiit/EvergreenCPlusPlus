#include<iostream>

int main()
{
   int * arr ;
   int ** arr2 = &arr ;
   std::cout << &arr <<std::endl ;
   std::cout << arr[0] <<std::endl ;
   
}
