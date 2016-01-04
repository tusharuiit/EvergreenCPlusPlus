#include<iostream>
using namespace std;
enum Color
{
    // Here are the enumerators
    // These define all the possible values this type can hold
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_WHITE,
    COLOR_CYAN,
    COLOR_YELLOW,
    COLOR_MAGENTA
};
void getGreyValue ( const Color& colour ) 
{

cout<<"colour in 0 is "<<colour - 12<<endl;
}

int getGreyValue1 ( Color colour ) 
{
//colour = colour - 1;
cout<<"colour in 1 is "<<colour <<endl;
}

int getGreyValue2 ( const Color colour ) 
{
cout<<"colour in 2 is "<<colour-1<<endl;
}


int main()
{
Color eColor = COLOR_MAGENTA;
//eColor = 5;
bool b ;
b=(eColor == COLOR_MAGENTA);
cout<<"b is "<<b<<endl;
b=(eColor == 7);
cout<<"b is "<<b<<endl;
 getGreyValue (eColor);
 getGreyValue1 (eColor);
 getGreyValue2 (eColor);
// Declare a variable of enumerated type Color

//cout<<eColor<<endl;
//cout<<COLOR_WHITE<<endl;
}
