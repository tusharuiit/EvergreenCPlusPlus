#include <stdlib.h>
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float a,b;
        int c;
	cout << "please enter the value a ";
	cin>> a;
	cout << "please enter the value b ";
	cin>>b;
	float fract=(float)random()/(float)RAND_MAX;
        c=int (a+ (b-a)* fract);
        cout << " c is "<<c;
	cout << " make a guess !! ";
    int guess;
    cin >> guess;
    while (c!=guess)
    {
       if (guess < c)
       {
           cout << "your guess is smaller";
       }
       else if (guess > c)
       {
           cout << "your guess is greater";
       }
       cout << " make a guess !! ";
       cin>>guess;
    }
    cout<<"bingo  !!";
    return 0;
}
