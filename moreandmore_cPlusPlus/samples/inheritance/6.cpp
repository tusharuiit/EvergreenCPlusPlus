#include<iostream>
using namespace std;
class A
{
   
   public : 
     void foo(){cout << "i love you 1" << endl ;}
};
class B : public A 
{
   public : 
     void foo(){cout << "i love you 2" << endl ;}
};
class C : public B 
{
   int a;
   public : 
     void foo(){cout << "i love you 3" << endl ;}
};
int main ()
{
  A a1;B b1;C c1;
  A* a2=new A();A* b2=new B();B* c2=new C();
  a1.foo();b1.foo();c1.foo();
  a2->foo();b2->foo();c2->foo();
  cout << "sizeof A "<<sizeof(A) <<endl ;
  cout << "sizeof B "<<sizeof(B) <<endl ;
  cout << "sizeof C "<<sizeof(C) <<endl ;
  cout << "sizeof C "<<sizeof(*a2) <<endl ;
  cout << "sizeof C "<<sizeof(a2) <<endl ;
}
