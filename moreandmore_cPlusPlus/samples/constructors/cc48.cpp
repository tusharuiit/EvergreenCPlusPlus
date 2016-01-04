#include<iostream>
using namespace std ;

struct A {
  int foo[3];
  A():foo{1, 2, 3} { }
  //A():foo({1, 2, 3}) { } /* invalid */
};

int main ()
{

}
