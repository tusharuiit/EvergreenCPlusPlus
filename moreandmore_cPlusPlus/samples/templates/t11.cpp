#include<iostream>
using namespace std ; 

template < typename T1 >
T1 spec1(T1 b)
{
   //T1 c = 5  ;
   return b ;
}

int main()
{
  int a = 5 , b = 6 ; spec1 ( a  ) ;
}
