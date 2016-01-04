#include<iostream>
using namespace std;

class Cents
{
private:
    int m_nCents;
 
public:
    Cents(int nCents) { m_nCents = nCents; }
 
    // Overload -cCents
    Cents operator-();
    friend ostream& operator<< (ostream &out, Cents &c2)
{    
    out <<  c2.m_nCents;
    return out;
}
};

// note: this function is a member function!
Cents Cents::operator-()
{
    return Cents(-m_nCents);
}

int main ()
{
Cents c1(666);
Cents c3 = (-c1);
cout<<c3<<endl;

}
