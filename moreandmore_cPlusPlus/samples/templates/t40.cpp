#include<iostream>
#include<cstring>
using namespace std;
//create a template class of your own

template <typename T1 , typename T2>
class A<T1 , T2 >
{
private :
T1 a1;
T2 a2;
public :
A():a1(0), a2 (0){}
A(T1 par1 , T2 par2):a1(par1),a2(par2){}
void func();
};

template <typename T1 , typename T2>
void A<T1,T2>::func()
{cout << "i l u 1 " << endl ;
 cout << a1+a2 << endl ; }
 
template <typename T1 , typename T2>
class A<T1 * , T2 *>
{
private :
T1 a1;
T2 a2;
public :
A():a1(0), a2 (0){}
A(T1 par1 , T2 par2):a1(par1),a2(par2){}
void func();
};

template <typename T1 , typename T2>
void A<T1*,T2*>::func()
{cout << "i l u 2 " << endl ;
 cout << a1+a2 << endl ; } 
 
template <typename T1 , typename T2>
class A<T1 * , T2 >
{
private :
T1 a1;
T2 a2;
public :
A():a1(0), a2 (0){}
A(T1 par1 , T2 par2):a1(par1),a2(par2){}
void func();
};

template <typename T1 , typename T2>
void A<T1*,T2>::func()
{cout << "i l u 3 " << endl ;
 cout << a1+a2 << endl ; }  
 
int main ()
{
   A <int , float>a(2 , 3.5); a.func() ;
   A <int* , float*>b(2 , 3.5); b.func() ;
   A <int* , float>c(2 , 3.5); c.func() ;
   A <int , int>d(2 , 3.5); d.func() ;
}
