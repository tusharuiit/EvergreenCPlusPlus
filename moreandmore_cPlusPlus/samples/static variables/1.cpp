#include <iostream>
#include <string>
using namespace std;

class A{
public :
static int a ;
int b  ;
//A(){}
};
int A::a=6;
int main ()
{
  A a1;
  cout << "sizeof A = " << sizeof(A)<< endl;
  cout << "sizeof a1 = " << sizeof(a1)<< endl;  
  A::a++;
  cout<<A::a<<endl;
  //cout <<a <<endl ;   
}
