#include <iostream>
using namespace std;
void AddOne(const int &y)
{
    cout << y << endl;
}
 
int main()
{
    int x = 5;
 
    cout << "x = " << x << endl;
    AddOne(4);
    cout << "x = " << x << endl;
 
    return 0;
}
