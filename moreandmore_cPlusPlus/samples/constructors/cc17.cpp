#include<iostream>
using namespace std ;

int main ()
{
  //int &x = 5 ; // DOES NOT WORK !! but the next one works ! 
  const int &a = 5 ;  
  cout << a << endl ;
  
  int b = 55;
  //a = b ;
  
  cout << &a << endl ;
  cout << &b << endl ;

}
