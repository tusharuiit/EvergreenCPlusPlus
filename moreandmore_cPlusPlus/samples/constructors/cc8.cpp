#include<iostream>
using namespace std ;

class Something
{
public:
    int m_nValue;
    Something (int val) {m_nValue = val;}
    const int GetValue() const { int b = 5 ; b = b +1 ;return m_nValue ; }

    int GetValue() { return m_nValue; }
};

int main ()
{
  Something cSomething(7);
  int a = cSomething.GetValue(); // calls non-const GetValue();
  cout << a << endl ; 
  cout << cSomething.GetValue() << endl ;
  a += 10 ;
  cout << a << endl ; 
  cout << cSomething.GetValue() << endl ;
  
  const Something cSomething2(8);
  const int b = cSomething2.GetValue(); // calls const GetValue();
  cout << b << endl ; 
  const int c = 8 ;
  //b  = c ; 
}
