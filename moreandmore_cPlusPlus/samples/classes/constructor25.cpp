#include <iostream>
using namespace std;
class Base
{
public:
     int GetValue() { return 5; }
    //virtual int GetValue() { return 5; }
};
 
class Derived: public Base
{
public:
     double GetValue() { return 6.78; }
    //virtual double GetValue() { return 6.78; }
};

int main()
{
    Derived cDerived;
    Base &rBase = cDerived;
    cout << "rBase is a " << rBase.GetValue() << endl;
 
    return 0;
}
