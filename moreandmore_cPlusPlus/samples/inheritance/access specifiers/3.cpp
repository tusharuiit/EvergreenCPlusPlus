#include <iostream>
#include <string>
using namespace std;

class A {
public :
virtual void foo();
};
class B: private A {
public :
virtual void foo ();
};
void A :: foo(){ // do something
};
void B :: foo () { A :: foo () ; }
int main ()
{
  B myB ;
  myB.foo ( ) ;
}
