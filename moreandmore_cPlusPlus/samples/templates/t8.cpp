#include<iostream>
using namespace std  ;
template <typename T1 , class T2>
T1 maxi (T1& a , T2& b)
{
   if (a>b) 
   {return a ;}
   else 
   {return b ;}
} 
int main ()
{
  int a = 5 ; double b = 55.55;
  cout << maxi ( a , b ) << endl ;
}
