// sum of series
#include<iostream>


float bar(float a)
{
   if (a==0.0)
   return 0.0;
   else
   return ((1.0/a) + bar(a-1.0));
}

int main()
{
   float a;
   std::cin>>a;
   std::cout<<bar(a);    
}
