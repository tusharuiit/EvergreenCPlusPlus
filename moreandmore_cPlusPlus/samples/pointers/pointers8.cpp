#include<iostream>
int main()
{
  int a=6;
  int *p;
  p=&a;  
  std::cout<<a<<std::endl; 
  std::cout<<*p<<std::endl;
  p=p+1;
  std::cout<<*p<<std::endl;
  p=p-1; 
  std::cout<<*p<<std::endl;
  (*p)++;  
  std::cout<<*p<<std::endl;
  *p++;
  std::cout<<*p<<std::endl;
}
