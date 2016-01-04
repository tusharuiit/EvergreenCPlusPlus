#include<iostream>
int main()
{
  double* grades = new double [45] ;
  grades[1]=3.5;
  grades[2]=4.5;
  std::cout<<*(grades+1)<<std::endl;
  std::cout<<grades<<std::endl;
  delete[] grades ;
  std::cout<<grades[2]<<std::endl;
  std::cout<<grades<<std::endl;
  //std::cout<<*p<<std::endl;
  
}
