#include <iostream>
#include <string>
using namespace std;

class A {
public :
virtual void foo () = 0;
virtual void bar () = 0 ;
};
// t h a t doesn ’ t work i n C++
class AIsInterface 
{
public : 
void foo (){cout << "i l u 1 " << endl ;};
// e v e r y t h i n g i s p u b l i c and
void bar () ;
// everything is v i r t u a l
};
int main ()
{AIsInterface obj1 ;
obj1.foo(); }
