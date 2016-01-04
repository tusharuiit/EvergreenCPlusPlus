#include<iostream>
using namespace std;
class Something
{
public:
    int m_nValue;
    Something() { m_nValue = 55; }
    const int& GetValue() const { return m_nValue; }
    int& GetValue() { return m_nValue; }
};
int main()
{
int *x,*y;
Something cSomething;
x=&(cSomething.GetValue()); // calls non-const GetValue();
cout<<*x<<endl;
*x=*x+1; 
//cout<<x<<endl;
cout<<cSomething.GetValue()<<endl;
/*
const Something cSomething2;
y=cSomething2.GetValue(); // calls const GetValue();
cout<<y<<endl;
y++;
cout<<y<<endl;*/
}
