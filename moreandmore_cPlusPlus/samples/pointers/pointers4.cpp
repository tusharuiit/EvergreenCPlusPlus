#include<iostream>
int main()
{
 int *p ;
 for ( int i =0; i <1; i ++) 
 {
   int a = 2 ;
   p = &a ;
   std::cout << a << std::endl ;
   std::cout<<*p << std::endl;
   std::cout<<p << std::endl;
   std::cout<<&a << std::endl;
 }
 //std::cout<a<std::endl;
 //std::cout<<*p<<std::endl;
 // itworks but it points to nothing right now
}
