#include<iostream>
using namespace std ;

class Something
{
public:
    int m_nValue;
    Something (int val) {m_nValue = val;}
    const int& GetValue()  {m_nValue = 75;return m_nValue;}
};

int main ()
{
  Something cSomething2(8);
  int b = cSomething2.GetValue(); // calls const GetValue();
  cout << b << endl ; 
  const int c = 8;  
}
