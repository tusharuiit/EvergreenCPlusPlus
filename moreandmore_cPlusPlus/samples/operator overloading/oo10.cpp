#include<iostream>
using namespace std;
int* fun (int *b)
{
    *b=*b + 2;
    return b;
}

int main ()
{
    int a = 5  ;
    int* c = fun (&a);
    //fun (&a);
}


