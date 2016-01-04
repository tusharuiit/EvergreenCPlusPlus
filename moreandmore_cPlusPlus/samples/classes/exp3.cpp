#include <iostream>
using namespace std;
class A
{
public:
    virtual const char* GetName() { return "A"; }
     
};
 
class B: public A
{
public:
      const char* GetName() { return "B"; }
      //virtual int GetName(int a) { return a; }
};
 
class C: public B
{
public:
     //const char* GetName() { return "C"; }
};
 
class D: public C
{
public:
     //const char* GetName() { return "D"; }
};
 
int main()
{
    D cClass;
    A &rBase = cClass;
    cout << "rBase is a " << rBase.GetName() << endl;
}
