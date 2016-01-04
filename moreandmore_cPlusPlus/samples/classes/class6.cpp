#include <iostream>
class Fraction
{
private:
    int m_nNumerator;
    int m_nDenominator;
 
public:
    Fraction() // default constructor
    {
         m_nNumerator = 2;
         m_nDenominator = 3;
    }
 
    int GetNumerator() { return m_nNumerator; }
    int GetDenominator() { return m_nDenominator; }
    double GetFraction() { return (double)(m_nNumerator) / m_nDenominator; }
};

int main()
{
   Fraction cDefault; // calls Fraction() constructor
   std::cout << cDefault.GetNumerator() << "/" << cDefault.GetDenominator() << std::endl;
   std::cout << cDefault.GetFraction() << std::endl ;
}
