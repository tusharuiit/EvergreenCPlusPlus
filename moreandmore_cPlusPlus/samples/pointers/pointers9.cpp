#include<iostream>
int main()
{
  int a=6;
  int*p=&a;
  int**c;
  int *q;
  //q=p;//works
  *q=*p;
  c=&p;
  //p=&a;  
  std::cout<<a<<std::endl;
  std::cout<<*q<<std::endl;  
  *c=*c+1;
  std::cout<<*p<<std::endl;
  *c=*c-1;
  p=p+1;
  std::cout<<*p<<std::endl;
  p=p-1; 
  std::cout<<*p<<std::endl;
  (*p)++;  
  std::cout<<*p<<std::endl;
  *p++;
  std::cout<<*p<<std::endl;
}
