#include<iostream>
#include<cstring>
using namespace std;
template <typename T1 , int size >
class A
{
    private :
    T1 a1[size];
    public :
    A()
    {
      for (int i = 0 ; i < size ; i++ )
      {a1[i] = i+5;}
    }
    void printarray();
};
template <typename T1 , int size>
void A<T1, size>::printarray()
{
    for (int i = 0 ; i < size ; i ++ )
      {cout << a1[i]<<"\t" ;}
}
int main ()
{
    A<double , 11> obj1 ;
    obj1.printarray();
}
