#include<iostream>
using namespace std;
 
class Base
{
protected:
    int m_nValue;
 
public:
    Base(int nValue)
        : m_nValue(nValue)
    {
    }
 
    void Identify() { cout << "I am a Base" << endl; }
};

class Derived: public Base
{
public:
    Derived(int nValue)
        :Base(nValue)
    {
    }
 
    int GetValue() { return m_nValue; }
};

int main()
{
    Derived cDerived(5);
    cout << "cDerived has value " << cDerived.GetValue() << endl;
 
    return 0;
}
