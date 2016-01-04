#include<iostream>
using namespace std ;

class Something
{
public:
    int m_nValue;
    Something (int val) {m_nValue = val;}
    int GetValue() const {return m_nValue;}
};

int main ()
{
  const Something cSomething2(8) ;
  int b = cSomething2.GetValue() ; // calls const GetValue();
  cout << b << endl ; 
  const int c = 8;  
}

// LESSON - NORMAL OBJECTS CAN CALL CONST FUNCTIONS AS WELL BUT CONST 
// FUNCTIONS CANNOT CALL NORMAL NON-CONST FUNCTIONS !!!!
