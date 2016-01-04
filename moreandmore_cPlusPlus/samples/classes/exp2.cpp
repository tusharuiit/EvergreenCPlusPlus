#include <iostream>
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
 
    const char* GetName() { return "Base"; }
    int GetValue() { return m_nValue; }
};
 
class Derived: public Base
{
public:
    Derived(int nValue)
        : Base(nValue)
    {
    }
 
    //const char* GetName() { return "Derived"; }
    int GetValueDoubled() { return m_nValue * 2; }
};

int main()
{
    using namespace std;
    Derived cDerived(5);
    cout << "cDerived is a " << cDerived.GetName() << " and has value " << cDerived.GetValue() << endl;
 
    Derived &rDerived = cDerived;
    cout << "rDerived is a " << rDerived.GetName() << " and has value " << rDerived.GetValue() << endl;
 
    Derived *pDerived = &cDerived;
    cout << "pDerived is a " << pDerived->GetName() << " and has value " << pDerived->GetValue() << endl;
 
    return 0;
}
