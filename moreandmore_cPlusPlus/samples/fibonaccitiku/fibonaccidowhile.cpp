#include<iostream>
void printFibonaccidowhile(int max)
{
   int f0=0;
   int f1=1;
   int f2;
   std::cout<<f0<<"   "<<f1<<"    ";
   do
   {
      f2=f0+f1;
      std::cout<<f2<<"     ";
      f0=f1;
      f1=f2;
   }while(f0+f1 <= max);
}
