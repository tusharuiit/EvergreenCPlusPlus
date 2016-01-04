#include<iostream>
using namespace std;
class Cents;
class Cents1
{
private:
    int a;
    int b;
 
public:
    Cents1(int c) { a = c; }
 
    friend Cents1 operator+(const Cents1 &c1, const Cents &c2);
 
    int GetCents() { return b; }
};
class Cents
{
private:
    int m_nCents;
 
public:
    Cents(int nCents) { m_nCents = nCents; }
 
    // Add Cents + Cents
    friend Cents operator+(const Cents &c1, const Cents &c2);
    friend Cents1 operator+(const Cents1 &c1, const Cents &c2);
 
    int GetCents() { return m_nCents; }
};
 
// note: this function is not a member function!
Cents operator+(const Cents &c1, const Cents &c2)
{
    // use the Cents constructor and operator+(int, int)
    return Cents(c1.m_nCents + c2.m_nCents);
}

Cents1 operator+(const Cents1 &c1, const Cents &c2)
{
    // use the Cents constructor and operator+(int, int)
    Cents1 obj2 = c1;
    obj2.b = obj2.a + c2.m_nCents;
    return obj2;
}
 
int main()
{
    Cents cCents1(6);
    Cents1 cCents2(8);
    Cents1 cCentsSum = cCents2 + cCents1;
    std::cout << "I have " << cCentsSum .GetCents() << " cents." << std::endl;
 
    return 0;
}
