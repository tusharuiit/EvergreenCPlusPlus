#include<iostream>
using namespace std ;

class A 
{
  public :
  int attr ;
  
  A();
};


A::A():
attr(4){
}

/*A::A()
{
  attr=5;
}*/

int main ()
{
  A a;
  cout << a.attr << endl ;
}
