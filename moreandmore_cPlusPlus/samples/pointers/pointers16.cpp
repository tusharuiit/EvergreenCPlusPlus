#include<iostream>
using namespace std;
int main()
{
  
  int *p[5] ;
  for(int i = 0;i<5;i++)
  {
      cout<<p[i]<<endl;
  }
  cout<<p[0]+1<<endl;
  cout<<p[0]+2<<endl;
  cout<<p[0]+3<<endl;
  //std::cout<<p<<std::endl;
}
