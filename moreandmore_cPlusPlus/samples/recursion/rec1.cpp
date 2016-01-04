#include<iostream>
using namespace std;

int gcd(const int &a , const int &b )
{
   if (a % b == 0)
   {
       return b ;
   }
   else
   {
       return gcd ( b , a%b) ;
   }
}

int main()
{
   int a = 6 ; int b = 54 ;
   cout << "gcd = " << gcd (a , b ) << endl ;    
}
