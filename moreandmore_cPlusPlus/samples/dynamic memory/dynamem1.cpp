#include<iostream>
int main()
{
  double *p;
  //*p  =  5.0; // very very important
  //std::cout<<*p<<std::endl;
  p=new double;
  *p = 20;
  std::cout<<*p<<std::endl;
  std::cout<<p<<std::endl;
  delete p;
  //*p = 30;
  *p = 30;
  std::cout<<*p<<std::endl;
  std::cout<<p<<std::endl;
}
