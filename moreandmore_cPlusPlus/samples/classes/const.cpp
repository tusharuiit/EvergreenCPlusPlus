#include <iostream>
using namespace std;
int main()
{
   const int a = 8;
   cout<<a<<endl;
   const int* p1 = &a;
   //a=5;
   int b = 22;int c = 32;
   const int* p = &b;
   cout<<*p<<endl;
   b = 7;
   cout<<*p<<endl;
   //int* p = &c;
   
}
