#include <iostream>
using namespace std;

class A {
public :
virtual void foo()=0;
virtual void bar()=0;
};
// t h a t doesn ’ t work i n C++
class AIsInterface {
public :
void foo ( ){}
// e v e r y t h i n g i s p u b l i c and
void bar(){}
// everything is v i r t u a l
};
int main ()
{
   AIsInterface a1;
   a1.foo(); // to prove that foo is private in AisInterface
}
