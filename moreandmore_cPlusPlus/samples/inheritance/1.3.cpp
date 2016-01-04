#include<iostream>
using namespace std ;

struct A {
public :
  int m_A1;
  A()
  {
     cout << "Let us C++" << endl;
  }
  A(int)
  {
     cout << "Let us C++ again and again" << endl;
  }

  A(float)
  {
     cout << "Let us C++ again and again and again" << endl;
  }
  void getterA()
  {
     cout << "The value of m_A1 = " << m_A1 << endl ;
  }
};

int main ()
{
   A();
   A(5);
}
