#include<iostream>
using namespace std ;

class Something
{
public:
    int m_nValue;
    Something (int val) {m_nValue = val;}
    const int& GetValue() const {return m_nValue;}
};

int main ()
{
  const Something cSomething2(8) ;
  int &b = cSomething2.GetValue() ; 
  cout << b << endl ; 
}
