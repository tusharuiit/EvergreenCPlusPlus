#include <iostream>
using namespace std;
 
class Base
{
public:
    int m_nValue;
 
    Base(int nValue=5)
        : m_nValue(nValue)
    {
        cout << "Base" << endl;
    }
};
 
class Derived: public Base
{
public:
    double m_dValue;
 
    Derived()
        : m_dValue(m_nValue*2)
    {
        cout << "Derived" << endl;
        m_nValue = 500;
    }
};
 
int main()
{
    cout << "Instantiating Base" << endl;
    Base cBase;
 
    cout << "Instantiating Derived" << endl;
    Derived cDerived;
    
    cout << " "<<cDerived.m_dValue<<" " << endl ;
    cout << " "<<cDerived.m_nValue<<" " << endl ;
    
    return 0;
}
