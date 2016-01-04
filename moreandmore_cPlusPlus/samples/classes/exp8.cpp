#include <iostream>
using namespace std;
class Base

{
public:
    virtual ~Base()
    {
        cout << "Calling ~Base()" << endl;
    }
};
 
class Derived: public Base
{
private:
    int* m_pnArray;
 
public:
    Derived(int nLength)
    {
        m_pnArray = new int[nLength];
    }
 
    virtual ~Derived() // note: not virtual
    {
        cout << "Calling ~Derived()" << endl;
        delete[] m_pnArray;
    }
};
 
int main()
{
    Derived pDerived;
    //Derived pDerived(5);
    //Derived *pBase = pDerived;
    //delete pDerived;
}
