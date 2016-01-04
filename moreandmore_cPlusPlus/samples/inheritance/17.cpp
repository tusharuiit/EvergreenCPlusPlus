#include <iostream>
using namespace std;
class A
{
    public:
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
};
int main()
{
    A *a = new B();
    a->func();
    return 0;
}
