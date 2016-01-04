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
    int* m_pnArray;
 
public:
    Derived(int nLength)
    {
        m_pnArray = new int[nLength];
    }
 
    ~Derived() // note: not virtual
    {
        cout << "Calling ~Derived()" << endl;
        delete[] m_pnArray;
    }
};
 
int main()
{
    Derived *pDerived = new Derived(5);
    Derived *pBase = pDerived;
    delete pDerived;
    return 0;
}
