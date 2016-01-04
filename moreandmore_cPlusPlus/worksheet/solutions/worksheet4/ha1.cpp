#include <stdlib.h>
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int a,b
    int c;
    char user;
    char user1;
	cout << "please enter the value a ";
	cin>> a;
	cout << "please enter the value b ";
	cin>>b;
    c=((a+b)/2);
    cout << "is "<< c << " the right guess ? y/n ";
	cin>>user;
    while (user!='y')
    {
        cout << "smaller or greater ? s/g ";
        cin >> user1;
        if (user1 == 's')
       {
           c=(c+b)/2;
       }
        else if (user1 == 'g')
        {
        	c=(a+c)/2;
        }
        cout << "is "<< c << " the right guess ? y/n ";
        cin>>user;
    }
    cout<<"bingo  !!"<<c<<" is the one ! ! ! ! ";
    
    return 0;
}
