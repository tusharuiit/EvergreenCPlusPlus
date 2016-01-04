#include<iostream>
#include <iomanip>
//#include <iomanip.h>
int main ()
{
  using namespace std ;   
  char buf[4];char buf1[4];
  cin >> setw(5) >> buf;
  cout<<buf[0]<<endl ;
  cin >>  buf1;
  cout<<buf1[0]<<endl ; 
}
