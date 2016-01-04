#include <iostream>
using namespace std;
class Base
{
public:
     Base()
    {
        cout << "sexy1" << endl;
    }
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
        cout << "sexy2" << endl;
    }
 
     ~Derived()
    {
        cout << "Calling ~Derived()" << endl;
        delete[] m_pnArray;
    }
};
 
int main()
{
    Base *pBase = new Derived(5);
    //Derived *pDerived = new Derived(5);
    //delete pDerived;
    //Base *pBase = pDerived;
    delete pBase;
}
