#include<iostream>
#include<cstring>
using namespace std;

template <typename T>
T add1(T a1,T a2)
{
   cout << "i l u 1 " << endl ; 
   return a1+a2;
}
template <typename T>
T add1(T* a1,T* a2)
{
   cout << "i l u 2 " << endl ; 
   return ((*a1)+ (*a2));
}

template <typename T>
void add1(T a1,T* a2)
{
   cout << "i l u 3 " << endl ; 
   
}

int main ()
{
   double d1 = 5.5 ;double d2 = 7.3 ;
   cout << add1(d1 , d2) << endl ;
   double  d3 = 10.5 ;double  d4 = 17.3 ;
   cout << add1(&d3 , &d4) << endl ;
   add1(d3 , &d4)  ;
}
