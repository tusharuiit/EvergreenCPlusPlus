#include<iostream>
using namespace std;
int main ()
{
    int a = 5  ;
    int c = fun (&a);
    fun (&a);
}

int* fun (int *b)
{
    *b=*b + 2;
}
