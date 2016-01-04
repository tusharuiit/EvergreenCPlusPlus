#include<iostream>
using namespace std ;
class Cents
{
private:
    int m_nCents ;
public:
    Cents(int nCents=0)
    {
        m_nCents = nCents ;
    } 
    // Overloaded int cast
    operator int() { return m_nCents ; }
 
    int GetCents() { return m_nCents ; }
    void SetCents(int nCents) { m_nCents = nCents ; }
};
class Dollars
{
private:
    int m_nDollars ;
public:
    Dollars(int nDollars=0)
    {
        m_nDollars = nDollars ;
    }
 
     // Allow us to convert Dollars into Cents
     operator Cents() { return Cents(m_nDollars * 100) ; }
};
void PrintInt(int nValue)
{
    cout << nValue << " lau 1 " << endl ;
}
void PrintCents(Cents cCents)
{
    cout << cCents.GetCents() << "lau 2 " << endl ;
} 
int main()
{
    Dollars cDollars(9) ;
    PrintCents(cDollars) ; // cDollars will be cast to a Cents
    
    Cents cCents(8) ;
    int nCents = static_cast<int>(cCents) ;
    PrintInt(nCents) ;
    
    Cents cCents1(7) ;
    PrintInt(cCents1) ; // print 7
    
    Dollars cDollars1(99);
    Cents cCents2 = (cDollars1) ; // BEAT THAT !!!!
    //Cents cCents2 = static_cast<Dollars>(cDollars1);
    //Cents cCents2 = static_cast<Cents>(cDollars1);
    PrintInt(cCents2) ;
}
