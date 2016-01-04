#include<iostream>
using namespace std ;

class Something
{
public:
    int m_nValue;
    Something (int val) {m_nValue = val;}
    int& GetValue()  {m_nValue = 75;return m_nValue+1;}
};

int main ()
{
  Something cSomething2(8);
  int b = cSomething2.GetValue(); // calls const GetValue();
  cout << b << endl ; 
  const int c = 8;  
}
