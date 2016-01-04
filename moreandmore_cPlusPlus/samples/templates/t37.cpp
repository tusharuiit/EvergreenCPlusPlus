#include<iostream>
#include<cstring>
using namespace std;

int add1(int a1,int a2)
{
   cout << "i l u 1 " << endl ; 
   return a1+a2;
}
int add2(int * a1,int * a2)
{
   cout << "i l u 2 " << endl ; 
   return *a1+ *a2;
}
int* add3(int * a1,int * a2)
{
   cout << "i l u 3 " << endl ;
   int c = *a1 + *a2 ;  int *d = &c ;
   return d;
}
int& add4(int * a1,int * a2)
{
   cout << "i l u 4 " << endl ; 
   int c = *a1+ *a2 ;   
   return c;
}
int main ()
{
   int d1 = 5 ; int d2 = 7 ;
   cout << add1(d1 , d2) << endl ;
   cout << add2(&d1 , &d2) << endl ;
   cout << *(add3(&d1 , &d2)) + 1<< endl ;
   cout << (add4(&d1 , &d2)) + 2<< endl ;
}
