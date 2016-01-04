#include <iostream>

using namespace std;

int check(int a, int b)
{
   int c;
   char user;
   char user1;
   
   c=((a+b)/2);
   cout << "is "<< c << " the right guess ? y/n ";
   cin>>user;
   while (user!='y')
    {
        cout << "smaller or greater or equal ? s/g/y ";
        cin >> user1;
        if (user1 == 's')
       {
           
           check(c, b);
           return 0; 
       }
        else if (user1 == 'g')
        {
           
           check(a, c);
           return 0;
        }
        else if (user1 == 'y')
        {
           return 0;
        }
        
    }
    cout<<"BINGO ! ! !  ";
    return 0;
}  


int main ()
{
	int a,b;
    
    
	cout << "please enter the value a ";
	cin>> a;
	cout << "please enter the value b ";
	cin>>b;
        check( a,  b);
        return 0;
    
}
