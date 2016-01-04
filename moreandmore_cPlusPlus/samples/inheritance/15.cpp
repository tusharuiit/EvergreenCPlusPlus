#include <iostream>
using namespace std;
//multiple inheritance !! 
class A {
public :
void foo (){cout << "inside foo of A " << endl ;} 
void bar (){cout << "inside bar of A " << endl ;} 
};
class B {
public :
void bar(){cout << "inside bar of B " <<endl ; } 
};
class C: public A , public B {
};
int main ()
{
  C myC;
  myC.foo();
  myC.bar();
}
