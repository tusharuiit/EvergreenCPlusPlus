#include<iostream>
using namespace std;
int& change(int &x)
{
    x=66;return x;
}
int main()
{
    int a = 5;
    cout<<"a = "<<change(a)<<endl;
} 
