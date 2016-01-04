#include<iostream>
using namespace std;
int main()
{
  
  int arr[3]={4 , 5 ,6} ;
  int *p;
  //arr=arr+1;
  p=arr;
  p++;
  std::cout<<*arr<<std::endl;
  std::cout<<*p<<std::endl;
}
