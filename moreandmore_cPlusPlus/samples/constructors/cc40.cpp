#include<iostream>
using namespace std ;

class Something
{
public:
    const int m_nValue;
    Something (int val = 0) : m_nValue(val){}
    const int GetValue() const {return m_nValue;}
};

int main ()
{
  const Something cSomething2(8) ;
  int b = cSomething2.GetValue() ; 
  b*=2;
  cout << b << endl ; 
}
