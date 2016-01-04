#include <stdlib.h>
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int a , b;
    cout<<"integer a = ? \t";cin>>a;
    cout<<"integer b = ? \t";cin>>b;
    // now the computer wil randomly select a number between a and b
    srand(67);
    int c;
    c=a + (b - a)*((float)rand()/(float)RAND_MAX); 
    cout<<"integer c =  \t"<<c;
    int guess;
    cout<<"guess a number between "<<a<<" and "<<b<<" \t";cin>>guess;
    while (c!=guess)
    {
       if (c>guess)
       {
           a=guess;
       }
       else 
       {
           b=guess;
       }
       cout<<"guess a number between "<<a<<" and "<<b<<" \t";cin>>guess;
    } 
    cout<<" yes u chose it right the random number c is "<<c <<endl;   
}
