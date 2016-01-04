#include<iostream>
using namespace std;

int sum(const int &a )
{
   if (a == 1 )
   {
       return 1 ;
   }
   else
   {
       return a+sum(a-1) ;
   }
}

int main()
{
   int a = 6 ;
   cout << "sum = " << sum (a) << endl ;
}
