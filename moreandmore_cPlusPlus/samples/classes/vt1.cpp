#include <iostream>
using namespace std;
class Base
{
public:
    virtual void function1() {cout <<"sexy 1"<<endl;};
    virtual void function2() {cout <<"sexy 2"<<endl;};
};
 
class D1: public Base
{
public:
    virtual void function1() {cout <<"sexy 3"<<endl;};
};
class D2: public Base
{
public:
    virtual void function2() {cout <<"sexy 4"<<endl;};
};

int main()
{
    Base cClass;
    D1 cClass1;
    Base *pClass = &cClass;
    pClass->function1();
}
