#include <iostream>
using namespace std;
int main()
{
    int *p1 = new int;
    *p1=5;
    cout << *p1 << endl;
    int *p2 = p1;
    *p2=6;
    cout << *p1 << endl;
    cout << *p2 << endl;
}
