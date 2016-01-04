#include <iostream>
#include <string>
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
    void Identify(string b) { cout << "I am a Base " <<b << endl; }
    
};
class Derived: public Base
{
public:
    Derived(int nValue)
        :Base(nValue)
    {
    }
 
    void Identify(int a) { cout << "I am a Derived" << endl; }
    int GetValue() { return m_nValue; }
};

int main()
{
    Base cBase(5);
    cBase.Identify("hello");
 
    Derived cDerived(7);
    cDerived.Identify(5);
 
    return 0;
}
