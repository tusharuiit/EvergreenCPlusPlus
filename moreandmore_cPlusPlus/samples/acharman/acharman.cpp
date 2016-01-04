#include<iostream>
using namespace std;
int foo(int a,int b)
{
c++;
   if (a==0)
   { 
      cout<<"c is "<<c<<endl;
      return a+b;
   }
   else if (a>0 && b==0)
   {
      
      int t = foo(a-1,1);
      cout<<"a= "<<a<<" and b = "<<b<<"and value of t is "<<t<<endl;return t;
   } 
   else 
   {
      //foo(a-1,1);
      int m = foo(a-1,foo(a,b-1));
      cout<<"a= "<<a<<" and b = "<<b<<"and value of m is "<<m<<endl;return m;
   }
}

int main()
{
  cout <<" i love "<< foo(4,4,1)<<endl;  
}
