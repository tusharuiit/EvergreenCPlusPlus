#include <iostream>
using namespace std;
class Base
{
public:
    int m_nValue;
 
    Base(int nValue=0)
        : m_nValue(nValue)
    {
    }
};
class Derived: public Base
{
public:
    double m_dValue;
 
    Derived(double dValue=0.0)
        : m_dValue(dValue)
    {
    }
};
int main ()
{
   Base base1(5);
   cout<<base1.m_nValue<<endl;
   Derived der1(6);
   cout<<der1.m_dValue<<endl;
   cout<<der1.m_nValue<<endl;
   
}
