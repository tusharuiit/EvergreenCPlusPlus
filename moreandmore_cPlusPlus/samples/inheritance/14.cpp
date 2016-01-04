#include <iostream>
using namespace std;
//multiple inheritance !! 
class A {
public :
void foo (){cout << "inside foo of A "} 
};
class B {
public :
void bar(){} ;
};
class C: public A , public B {
};
int main ()
{
  C myC;
  myC.foo();
  myC.bar();
}
