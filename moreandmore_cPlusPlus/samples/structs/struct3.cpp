#include<iostream>
using namespace std ;
int foo (int &a , int &b)
{
  return a - b ;
}
int main()
{
   int x = 3 , y = 4 ;
   cout << foo (x , y) << endl ;
}
