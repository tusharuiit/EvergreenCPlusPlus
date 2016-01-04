#include<iostream>
#include<cstring>
using namespace std;

//create a template class of your own

template <typename T1 , typename T2>
class A
{
private :
T1 a1;
T2 a2;
public :
A():a1(0), a2 (0){}
A(T1 par1 , T2 par2):a1(par1),a2(par2){}
void func();
T1 ret1(){return a1;}
T2 ret2(){return a2;}
};

template <typename T1 , typename T2>
void A<T1,T2>::func()
{cout << "i l u 1 " << endl ;
 cout << a1+a2 << endl ; }

template <typename T1 , typename T2>
void func(A<T1,T2> & pallavi1)
{cout << "i l u 2 " << endl;
 cout << pallavi1.ret1() + pallavi1.ret2() << endl ; }  
 
template <typename T1>
void func(A<T1,int> & pallavi1)
{cout << "i l u 3 " << endl ;
cout << pallavi1.ret1() + pallavi1.ret2() << endl ; }   

int main ()
{
   A <int,float>a(2,3.5);a.func();
   A <int,int>b(5,7.5);b.func();
   func(b) ; 
}
