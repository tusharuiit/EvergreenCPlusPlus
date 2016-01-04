#include<iostream>
#include<cstring>
using namespace std ; 
template <typename T>
class A
{
   private :
   T a ; 
   public :
   A(T b)
   {
      cout <<" i l u 1 "<< endl ; a = b ;
   }  
};
template <>
class A<double>
{
   private :
   double a ; 
   public :
   A(double b)
   {
      cout <<" i l u 2 "<< endl ; a = b ;
   }
};
int main ()
{
   A<int> a1(5) ;
   A<double> a2(5.5) ; 
}
