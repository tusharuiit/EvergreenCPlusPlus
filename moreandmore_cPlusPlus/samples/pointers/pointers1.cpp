#include <iostream>
 
void test(int &b)
{
   std::cout<<"&b = "<<&b<<std::endl;
   //std::cout<<"*b = "<<*b<<std::endl;
   //b=6;
      
} 

int main()
{
   int x=5; 
   std::cout<<"Before Swapping x = "<< x<<std::endl;
   test(x); 
   std::cout<<"After Swapping x = "<<x<<std::endl;
}
 

