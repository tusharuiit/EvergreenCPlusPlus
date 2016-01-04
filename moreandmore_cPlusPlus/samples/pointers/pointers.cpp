#include<iostream>
int main()
{
  int a=5;
  int *b;
  *b=a;
  std::cout<<"a = "<<a<<std::endl;
  //std::cout<<"*a = "<<*a<<std::endl;
  std::cout<<"b = "<<b<<std::endl;
  std::cout<<"*b = "<<*b<<std::endl;
}
