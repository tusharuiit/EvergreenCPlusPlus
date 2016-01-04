#include <iostream>
using namespace std;
class Base
{
protected:
 
public:
    int a ;
     const char* GetName() { return "Base"; }
};
 
class Derived: public Base
{
public:
    int b;
     const char* GetName() { return "Derived"; }
    int GetName1() { return b; }
};
 
int main()
{
    Derived cDerived;
    cDerived.a=5;
    cDerived.b=6;
    Base &rBase = cDerived;
    cout << "rBase is a " << rBase.GetName() << endl;
    //cout << "rBase has " << rBase.GetName1() << endl;
     cout<< "cDerived is a " << cDerived.GetName() << endl;
}
