#include <iostream>
using namespace std;
class Base

{
public:
     ~Base()
    {
        cout << "Calling ~Base()" << endl;
    }
};
 
class Derived: public Base
{
private:
    int m_pnArray;
 
public:
    Derived(int nLength)
    {
        m_pnArray = nLength;
    }
 
     ~Derived() // note: not virtual
    {
        cout << "Calling ~Derived()" << endl;
        
    }
};
 
int main()
{
    Derived pDerived(2);
    //Base pBase;
    //Derived pDerived(5);
    //Derived *pBase = pDerived;
    //delete pDerived;
}
