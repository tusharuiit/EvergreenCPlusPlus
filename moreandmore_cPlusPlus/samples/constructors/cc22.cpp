#include<iostream>
using namespace std ;

class Something
{
public:
    int m_nValue;
    Something (int val) {m_nValue = val;}
    const int GetValue() const { return m_nValue ; }
};

int main ()
{
  const Something cSomething2(8);
  const int b = cSomething2.GetValue(); // calls const GetValue();
  cout << b << endl ; 
}
