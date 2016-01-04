#include <iostream>
#include <cmath> 
int main()
{
    using namespace std;
    bool a=true;
    cout<<a<<endl;
    a=false;
    cout<<a<<endl;
    a=0;
    cout<<a<<endl;
    a=1;
    cout<<a<<endl;
    a=2;
    cout<<a<<endl;
    a=!a;
    cout<<a<<endl;
    a=!(a | a);
    cout<<a<<endl;

}
