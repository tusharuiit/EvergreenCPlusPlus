#include<iostream>
using namespace std;

int fact(const int &a )
{
   if (a == 1 )
   {
       return 1 ;
   }
   else
   {
       return a*fact(a-1) ;
   }
}

int main()
{
   int a = 6 ;
   cout << "factorial = " << fact (a) << endl ;
}
