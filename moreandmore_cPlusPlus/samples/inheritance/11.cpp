#include <iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"A constructor called"<<endl;
    }
        virtual void func() {
        cout<<"A::func called"<<endl;
    }
    private:
};
class B:public A
{
    public:
    B()
    {
        cout<<"B constructor called"<<endl;
    }
    private:
    void func() {
        cout<<"B::func called"<<endl;
    }
    void func1() {
        cout<<"B::func1 called"<<endl;
    }
};
int main()
{
    A *a = new B();
    a->func();
    B *b = a ;
    b->func1 ; 
    //a->func1();
    return 0;
}
