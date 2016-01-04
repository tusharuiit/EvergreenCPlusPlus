#include<iostream>
using namespace std ;

class Something
{
public:
    int m_nValue;
    Something (int val) {m_nValue = val;}  
    int& GetValue() { return m_nValue; }
};

int main ()
{
  Something cSomething(7);
  int& a = cSomething.GetValue(); // calls non-const GetValue();
  cout << a << endl ; 
  cout << cSomething.GetValue() << endl ;
  a += 10 ;
  cout << a << endl ; 
  cout << cSomething.GetValue() << endl ;
  
  
}
