#include<iostream>
using namespace std;
class Cents
{
private:
    int m_nCents; 
public:
    Cents(int nCents) { m_nCents = nCents; } 
    Cents operator+(const Cents &c2); 
    int GetCents() { return m_nCents; }
}; 
Cents Cents:: operator+(const Cents &c2)
{
    return Cents(m_nCents + c2.m_nCents);
} 
int main()
{
    Cents cCents1(6);
    Cents cCents2(8);
    Cents cCentsSum = cCents1 + cCents2;
    std::cout << "I have " << cCentsSum .GetCents() << " cents." << std::endl; 
    return 0;
}
