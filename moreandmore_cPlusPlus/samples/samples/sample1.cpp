#include <iostream>
#include<stdlib.h>
using namespace std;
int main ()
{
        int global=7;
        cout<<"g is .... "<<global<<"\n g2 is .... "<<::global<<"\n";
}
