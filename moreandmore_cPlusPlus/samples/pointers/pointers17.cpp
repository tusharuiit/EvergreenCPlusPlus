#include<iostream>
using namespace std;
int main()
{
  
  int p=5 ;
  int &m = p;
  std::cout<<m<<std::endl;
  std::cout<<&p<<std::endl;
  std::cout<<&m<<std::endl;
  m=m+1;
  std::cout<<p<<std::endl;
}
