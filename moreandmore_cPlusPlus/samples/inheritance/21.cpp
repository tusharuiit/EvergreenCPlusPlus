#include <iostream>
using namespace std;

class A
{
public:
    const int a1; 
    A(int a = 100):a1(a)
    {
        cout << "A" << endl;
    }
};
 
class B: public A
{
public:
    int b1;
    B(int a = 100 , int b = 100):A(a),b1(b)
    {
        cout << "B" << endl;
    }
};
 
class C: public B
{
public:
    const int c1;
    C(int a = 100 , int b = 200 , int c = 300):B(a,b),c1(c)
    {
        cout << "C" << endl;
    }
};
 
class D: public C
{
public:
    const int d1;
    D(int a=100 ,int b=200 ,int c=300 ,int d=400):C(a,b,c),d1(d)
    {
        cout << "D" << endl;
    }
};

int main()
{
   D d1(1 , 2 , 3 , 4);
   cout << " " << d1.a1 << " "<<d1.b1 <<" "<<d1.c1 << " " << d1.d1 << endl ;
}

