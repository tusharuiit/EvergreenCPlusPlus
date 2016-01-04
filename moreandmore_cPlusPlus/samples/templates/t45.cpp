#include<iostream>
#include<cstring>
using namespace std;

template <typename T1 , int size>
class A
{
    private :
    T1 a ;
    public :
    A(T1 val):a(val + size){}
    void print ();
};

template <typename T1 , int size>
void A<T1,size>::print ()
{ cout << " i l u 1 , a = " << a << endl ;}

template <int size>
void A<double , size>::print ()
{ cout << " i l u 2 , a = " << scientific << a << endl ;}

//DO THE FOLLOWING CONSTRUCTOR AS WELL after doing the abve print
/*template <int size>
A<double ,  size>:: A(double val):a(val + 2* size)
{ cout << " i l u 3 , a = " << a << endl ;}*/

int main()
{
   A<int , 5 > obj1(5); 
   obj1.print () ;
   A<double,5 > obj2(5); 
   obj2.print () ;
   A<float,5 > obj3(5); 
   obj3.print () ;
   /*A<float,5 > obj4(6); 
   obj3.print () ;*/
}
/*template <typename T>
int Array<T>::GetLength() { return m_nLength; }*/
