#include<iostream>
using namespace std; 
class Sun
{
private:
    double _mass , _diameter;
    double _temperature ;
public :
    double getweight() const { return _mass; }
}; 
class Planet
{
private:
    double _mass , _diameter;
    bool _life ;
public : 
    double getweight() const { return _mass; }
};
double getforce (const Sun & S1 , const Planet & P1)
{
    return S1.getweight() * P1.getweight() ;
}

double getforce (const Planet & P1 , const Sun & S1)
{
    return S1.getweight() * P1.getweight() ;
}
int main()
{
    
}
