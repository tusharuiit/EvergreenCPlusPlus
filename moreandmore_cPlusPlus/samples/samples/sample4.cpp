//Swap two numbers using pointers
#include <iostream>
 
int main()
{
   int x, y, *a, *b, temp , *temp1;
 
   std::cout<<"Enter the value of x and y\n";
   std::cin>>x;
   std::cin>>y;
   std::cout<<"Before Swapping x =  "<< x << "before Swapping y =  "<<y<<std::endl;
 
   a = &x;
   b = &y;
 
   temp = *b;temp1=b;
   std::cout<<" temp = *b gives temp as =  "<< temp<<std::endl; 
   std::cout<<" b  =  "<< b<<std::endl; 
   std::cout<<" *b  =  "<< *b<<std::endl;
   std::cout<<" temp1 = b gives temp1 as =  "<< temp1<<std::endl;
   *b = *a;
   *a = temp;
 
   std::cout<<"after Swapping x =  "<< x << "after Swapping y =  "<<y<<std::endl;
 
   //return 0;
}
