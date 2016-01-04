#include<iostream>
using namespace std;

template <class T> void swap1 (T&a,T&b) 
{
  T c(a);a=b;b=c;
}
int main ()
{
  int a = 5.3, b = 6.3;
  //swap1(a,b); // or
  swap1<int>(a,b);
  cout << "a = "<< a << " b = " << b <<endl ;
}
