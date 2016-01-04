// thsi just creates a linked list 
#include<iostream>
using namespace std ;

void printadd ( int * a )
{
    cout << " &a = " << &a << endl ;
   cout << " a =  " << a << endl ;
}

void printadd1 ( int **b )
{
    cout << " &b " << &b << endl ;
   cout << " b = " << b << endl ;
   cout << " *b " << *b << endl ;
   cout << " **b = " << **b << endl ;
}
int main ()
{  
   int n = 1 ;
   int * m = &n ;
   cout << "&m " << &m << endl ;
   cout << " m = " << m << endl ;
   printadd(m) ;
   printadd1(&m) ;
}
