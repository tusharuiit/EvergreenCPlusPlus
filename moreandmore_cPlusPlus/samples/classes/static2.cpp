#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    static int b = 7;
    int c;static int d;
    c=a+b;d=a+b;
    cout<<d<<endl;    
}
