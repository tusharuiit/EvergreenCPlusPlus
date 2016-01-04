#include<iostream>
using namespace std;
void swap(int &x,int &y);
int main()
{
  int a=1;
  int b=2;
  swap (a,b);
  cout<<"a=\t"<<a<<"\t"<<"b=\t"<<b<<endl;
}

void swap(int &x,int &y)
{
    cout<<"x= "<<x<<endl;
    int temp;
    temp=x;
    x=y;
    y=temp;
}
