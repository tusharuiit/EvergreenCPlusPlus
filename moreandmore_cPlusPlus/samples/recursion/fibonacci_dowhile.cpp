#include<iostream>
using namespace std;

int Fibonacci(int);
 
int main()
{
   int max, i = 0;
   cin >> max;
   cout<<"Fibonacci series"<<endl;
 
   do
   {
      cout << endl << Fibonacci(i) << endl ;
      i++; 
   }while ( Fibonacci(i) <= max );
}
 
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}
