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
  B(int valA , int valB) : m_B1(valB) {}
  void getterB()
  {
     cout << " The value of m_B1 = " << m_B1 << endl ;
  }
  int m_B1;
};

int main ()
{
   cout << " Manu is so cool !! " << endl ;
   B B_obj(2,3) ;
   cout << "B_obj.m_B1 = " << B_obj.m_B1 << endl ;
}
