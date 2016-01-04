#include <iostream>
 
void swap(int*);
 
int main()
{
   int x;
   x=3;
   std::cout<<"Before Swapping x = "<< x<<std::endl;
   std::cout<<"& x = "<< &x<<std::endl;
   swap(&x); 
 
   std::cout<<"After Swapping x = "<<x<<std::endl;
    
   //return 0;
}
 
void swap(int *a)
{
   //int temp;
 
   *a = *a+1;
   //*a = temp;   
}
