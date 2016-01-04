#include<iostream>
using namespace std;
class Something
{
public:
    int m_nValue;

    Something() { m_nValue = 0; }
};
 
int main()
{
    Something cFirst;
    Something cSecond;
    cout<<cFirst.m_nValue<<endl;
    cout<<cSecond.m_nValue<<endl; 
    return 0;
}
