#include<iostream>
using namespace std ;

class Something
{
private:
    static int s_nValue;
    int a; int b ;
public:
    static int GetValue() { return s_nValue; }
};
 
int Something::s_nValue = 1; // initializer
 
int main()
{
    Something s1 ;
    cout << " sizeof(Something) "<< sizeof(Something) << endl;
    cout << " sizeof(s1) "<< sizeof(s1) << endl;
}
