//Swapping numbers using call by reference
//In this method we will make a function to swap numbers.

#include <iostream>
 
//void swap(int*, int*);
void swap( const int &a,  int &b)
{
   int temp;
 
   temp=a;
   a = b;
   b = temp;
   
   //*a = temp;   
} 

int main()
{
   int x, y;
 
   std::cout<<"Enter the value of x and y"<<std::endl;
   std::cin>>x;std::cin>>y;
 
   std::cout<<"Before Swapping x = "<< x<<std::endl;
   std::cout<<"Before Swapping y = "<< y<<std::endl;
   
   swap(x, y); 
 
   std::cout<<"After Swapping x = "<<x<<std::endl;
   std::cout<<"After Swapping y = "<<y<<std::endl; 
   //return 0;
}
 

