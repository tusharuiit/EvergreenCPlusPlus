#include<iostream>
using namespace std;

class A 
{
  public:
  int a ;
  A(int k):a(k){ cout << " .a = " << a << endl ; }
};
class B : public A
{
 public :
 int b ;
 B(int i,int j):A(i),b(j){ cout << " .b = " << b << endl ;}
};
int print(A & a)
{
  cout << ".a = " << a.a << endl ;//"AND  .b= " << a.b << endl ;
}
int main ()
{
   B b1(1,2); print (b1); 
}
