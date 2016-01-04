#include<iostream>
#include<cstring>
using namespace std;

template <typename T1>
class A
{
    private :
    T1 var1 ;
    public :
    A(T1 val) : var1 (val){}
    void print()
    {cout << "i l u 1 " << var1 << endl ;}
};

template <>
class A<double>
{
    private :
    double var1 ;
    public :
    A(double val) : var1 (val){}
    void print()
    {cout << "i l u 2 " << var1 + 1.7<< endl ;}
};

int main ()
{
   A<int> obj1(8) ; obj1.print() ;
   A<double> obj2(8.3) ; obj2.print() ;
}
