#include<iostream>
using namespace std ;
# include <string>

class A
{
  public :
  int var1;
  A()
  {
    cout << "i l u " << endl ;
    var1 = 10 ;
  }
  void print()
  {cout << "i love u " << endl ;}
  void print() const
  {cout << "i love u in const " << endl ;}
};

int main ()
{
   A obj1 ;
   obj1.print() ; 
   const A obj2;
   obj2.print() ; 
}
