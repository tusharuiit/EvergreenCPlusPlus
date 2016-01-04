#include<iostream>
#include<cstring>
using namespace std ; 
template <typename T>
class A
{
    private:
    T a;
    public:
    A(T val)
    {
       cout << " i l u 1 " << endl ;
       a = val ;
    } 
    ~A()
    {
    } 
};
template<>
A<double>::A(double dval)
{
  cout << " i l u " << endl ;
  a = dval + 1  ;
}
int main ()
{
  int b = 4 ;
  A<int>a1(b) ;
  A<double>a2(b) ;    
}
