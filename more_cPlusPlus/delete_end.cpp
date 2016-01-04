#include<iostream>

int main()
{
   int * arr = new int[4];
   arr[0] = 0;arr[1] = 1;arr[2] = 2;arr[3] = 3;
   std::cout << arr[3] << std::endl ;
   delete[] (&(arr[3]));
   //std::cout << arr[3] << std::endl ;
    //std::cout << arr[2] << std::endl ;
}
