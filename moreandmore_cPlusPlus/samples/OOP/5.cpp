#include <iostream>
using namespace std;

class Something
{
public:
    int m_nValue;
 
    //int GetValue() const { return m_nValue; }
    int& GetValue() { m_nValue = 22;return m_nValue; }
};
int main ()
{
     Something s1;
//     int x=s1.GetValue();
     int &x=s1.GetValue();
     x = x+ 5 ;
     cout<<s1.m_nValue<<endl;
}
