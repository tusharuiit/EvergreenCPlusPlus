#include <iostream>
using namespace std;
class Something
{
public:
    int m_nValue;
    Something()
    {
       m_nValue = 22;
    }
    const int& GetValue() const { cout<<"i love u"<<endl;return m_nValue; }
    int& GetValue() {cout<<"i hate u"<<endl; return m_nValue; }
};

int main()
{
   Something cSomething;
   cSomething.GetValue(); // calls non-const GetValue();
 
   const Something cSomething2;
   cSomething2.GetValue(); // calls const GetValue();
}
