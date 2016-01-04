#include<iostream>
using namespace std;
class Base
{
public:
    int m_nValue;
 
    Base(int nValue=0)
        : m_nValue(nValue)
    {
      cout << "sexy1" << endl;
      cout << this->m_nValue << endl;
    }
};
 
class Derived: public Base
{
public:
    double m_dValue;
 
    Derived(double dValue=0.0)
        : m_dValue(dValue)
    {
       cout << "sexy2" << endl;
       cout << this->m_dValue << endl;
    }
};

int main()
{
    Derived cDerived(1.3); // use Derived(double) constructor
    cout << cDerived.m_nValue  << endl;
    cout << cDerived.m_dValue  << endl;
}
