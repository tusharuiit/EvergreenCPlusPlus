// start from  reading multiple inheritance in learncp and also executing this code from - 

// http://stackoverflow.com/questions/1061726/public-virtual-function-derived-private-in-c
#include <iostream>
using namespace std;
class A
{
    public:
        int tmp1;
        A()
    {
        tmp1 = 1 ;
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
    int tmp2;
    B()
    {
        tmp2 = 2 ;
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
    //cout<<a->tmp2<<endl;
    return 0;
}
