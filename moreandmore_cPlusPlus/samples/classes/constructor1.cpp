#include<iostream>
class Fraction
{
public:
    int m_nNumerator;
    int m_nDenominator;
 
    Fraction() // default constructor
    {
         m_nNumerator = 4;
         m_nDenominator = 6;
    }
 
    int GetNumerator() { return m_nNumerator; }
    int GetDenominator() { return m_nDenominator; }
    double GetFraction() { return static_cast<double>(m_nNumerator) / m_nDenominator; }
};

int main()
{
  Fraction cDefault; // calls Fraction() constructor
  std::cout << cDefault.GetNumerator() << "/" << cDefault.GetDenominator() << std::endl;
  std::cout << cDefault.m_nNumerator << "/" << cDefault.m_nDenominator << std::endl;
}
