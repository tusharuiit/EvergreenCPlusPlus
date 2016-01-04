#include<iostream>
int main()
{
  int a = 5;
  int *p = &a;
  std::cout<<*p<<std::endl;
  std::cout<<p<<std::endl;
  p++;  
  std::cout<<*p<<std::endl;
  std::cout<<p<<std::endl;
  p+=2;  
  std::cout<<*p<<std::endl;
  std::cout<<p<<std::endl;
}
