#include<iostream>
int main()
{
  double *p ;
  p = new double ; // now , p p o i n t s t o an e x i s t i n g new v a r i a b l e
  *p = 20 ;
  std::cout<<"*p is "<<*p<<"      "<<std::endl;
  delete p ;
  *p = 30 ;
  std::cout<<"*p is "<<*p<<"      "<<std::endl;
}
