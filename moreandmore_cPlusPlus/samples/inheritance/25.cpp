#include <iostream>
#include <string>
using namespace std;

class A
{};

class B : public A
{
public:
    void foo2 () {cout << " i l u 2 " << endl ;}
    void bar2 () {cout << " i l u bar2 " << endl ;}
};

class C : public A
{
public:
    void foo3 () {cout << " i l u 3 " << endl ;}
    void bar3 () {cout << " i l u bar3 " << endl ;}
};
 
void print(A & obj)
{obj.foo2() ; } 
int main()
{
    B ob1 ;
    obj1.foo2() ;
}
