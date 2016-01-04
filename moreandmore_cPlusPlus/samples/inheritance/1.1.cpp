#include<iostream>
using namespace std ;

class A {
public :
  int m_A1;
  void getterA()
  {
     cout << "The value of m_A1 = " << m_A1 << endl ;
  }
};

struct B : public A {
public :
  int m_B1;
  void getterB()
  {
     cout << " The value of m_B1 = " << m_B1 << endl ;
  }
};

int main ()
{
   cout << " Manu is cool !! " << endl ;
   B B_obj ;
   B_obj.m_B1 = 2 ; B_obj.m_A1 = 3 ;
   cout << "B_obj.m_B1 = " << B_obj.m_B1 << endl ;
   cout << "B_obj.m_A1 = " << B_obj.m_A1 << endl ;
}
