#include<iostream>
using namespace std ;
class A 
{
  private :
  int b ;
  public :
  A ( int c ) 
  {
    b = c;
    cout << b << endl ;
  }
  
};

int main ()
{
   int d = 5 ;
   A a1(d) ;
   A a2(a1) ;
}
