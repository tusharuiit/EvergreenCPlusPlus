#include<iostream>
int main()
{
  double array[4]={11,12,13,14};
  double *p;
  double *q;
  //std::cout<<*array[3]<<std::endl;
  q=array;
  p=&array[2];
  std::cout<<array[1]<<std::endl;
  std::cout<<array<<std::endl;
  std::cout<<*(array+2)<<std::endl;
  std::cout<<*p<<std::endl;
  std::cout<<*(p+1)<<std::endl;
  p++;
  std::cout<<*p<<std::endl;
  std::cout<<*q<<std::endl;
}
