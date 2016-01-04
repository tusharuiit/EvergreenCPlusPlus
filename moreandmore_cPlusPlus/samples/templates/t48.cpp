#include<iostream>
#include<cstring>
using namespace std;

template < typename T1 , int size >
class A
{
    private :
    T1 var1 ;
    public :
    A(T1 val) : var1 (val + size){}
    void print()
    {cout << "i l u 1 " << var1 << endl ;}
    T1& getvar()
    { return var1 ; }
};

template <int size>
void printit(A< double , size > & obj)
{
    cout << obj.getvar() << "\t"<<" i l u 2 " << endl ; 
}

template <>
void printit(A< double , 5 > & obj)
{
    cout << obj.getvar() << "\t"<<" i l u 55 " << endl ; 
}

int main ()
{
   A<int , 4> obj1(8) ; obj1.print() ;
   A<double , 4> obj2(8.3) ; obj2.print() ;
   A<double , 5> obj3(8.3) ; obj3.print() ;
   printit (obj2);
   printit (obj3);
}
