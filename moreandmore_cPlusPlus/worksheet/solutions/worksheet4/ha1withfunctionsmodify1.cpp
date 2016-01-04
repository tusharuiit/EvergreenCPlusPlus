#include <iostream>

using namespace std;

int check(int a, int b)
{
   int c;
   char user;
   
   
   c=((a+b)/2);
   cout << "is "<< c << " smaller or greater or bingo !! ? s/g/b ";
   cin>>user;
   while (user == 's' || user == 'g')
    {
        
        if (user == 's')
       {
           
           check(c, b);
           return 0; 
       }
        else if (user == 'g')
        {
           
           check(a, c);
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
