#include<iostream>
#include<cstring>
using namespace std;
template <typename T1>
class A
{
    private : 
    T1 a ;
    public :
    A(T1 val):a(val){}
    void print ();
};
template <typename T1>
void A<T1>::print ()
{ cout << " i l u 1 , a = " << a << endl ;}

template <>
void A<double>::print ()
{ cout << " i l u 2 , a = " << scientific << a << endl ;}

int main()
{
   A<int > obj1(5); 
   obj1.print () ;
   A<double > obj2(5); 
   obj2.print () ;
   A<float > obj3(5); 
   obj3.print () ;
}
