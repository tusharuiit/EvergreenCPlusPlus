#include<iostream>
using namespace std ; 

int main()
{
   int a = 55 ; double d = 55.55 ;
   int *p = &a ; int *q = &a ;
   //double *r = &a ;
   int *s = &d ;
   q++ ;
   cout << q - p  << endl;
   cout << p << endl;
   cout << q << endl;
   //cout << *r << endl;
}
