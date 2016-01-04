#include<iostream>
void foo ( int *a ) 
{
  (*a) +=1;
}
int main ( ) 
{
  int a = 20;
  foo ( &a ) ;
  std::cout << a ;
}

