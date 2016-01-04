#include<iostream>
using namespace std;

template <typename Type> // this is the template parameter declaration
Type max1(Type tX, Type tY)
{
    return (tX > tY) ? tX : tY;    
}

class Cents
{
private:
    int m_nCents;
public:
    Cents(int nCents)
        : m_nCents(nCents)
    {
    }
 
friend ostream& operator<< (ostream &out, Cents &cPoint)
{
    // Since operator<< is a friend of the Point class, we can access
    // Point's members directly.
    out << cPoint.m_nCents;
    return out;
}
friend bool operator>(Cents &c1, Cents&c2)
    {
        return (c1.m_nCents > c2.m_nCents) ? true: false;
    }
};
int main ()
{
 Cents cNickle(5);
 Cents cDime(10); 
 Cents cBigger = max1(cNickle, cDime);
 cout << cBigger << endl ;   
}
