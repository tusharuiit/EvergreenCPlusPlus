#include <iostream>
using namespace std;
class Base
{
protected:
 
public:
    virtual const char* GetName() { return "Base"; }
};
 
class Derived: public Base
{
public:
    virtual const char* GetName() { return "Derived"; } 
};
 
int main()
{
    Base cDerived;
    Base &rBase = cDerived;
    cout << "rBase is a " << rBase.GetName() << endl; 
    return 0;
}
