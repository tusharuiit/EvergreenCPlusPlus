#include<iostream>
using namespace std ;

template <typename T1 , typename T2, typename T3>
T3 fun1 (T1 a,T2 b, T3 fValue )
{
   int num ; cin >> num ;
   if (num == 0)
   {
      fValue = static_cast<T3>(a) / b;
      return fValue ;
   }
   else
   {
      return 0;
   } 
}
int main ()
{
   //int a = 2; int b = 4 ; float c = 0 ;
   //fun1(a,b,c);
   cout << fun1(2,4,0) << endl;
   float c = 0 ;
   cout << fun1(2,4,c) << endl;
   cout << fun1(2,4,0.0) << endl;
    
}
