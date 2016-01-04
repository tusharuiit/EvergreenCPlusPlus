#include<iostream>
#include"fibonacci.h"


void fib::printFibonacci(int max)
{
   int f0=0;
   int f1=1;
   int f2;
   std::cout<<f0<<"   "<<f1<<"    ";
   while(f0+f1 <= max)
   {
      f2=f0+f1;
      std::cout<<f2<<"     ";
      f0=f1;
      f1=f2;
   }
}
