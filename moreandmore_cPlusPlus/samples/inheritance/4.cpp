#include<iostream>
using namespace std; 
class celestialbody
{
   private : 
     double _mass,_diameter;
   public : 
     celestialbody(double mass,double diameter)
     { 
        _mass = mass ; _diameter = diameter ;
     }
     double getweight() const { return _mass; }
};
class Sun : public celestialbody 
{
   private:    
     double _temperature ;
   public :
     Sun (double mass,double diameter,double temperature): celestialbody(mass,diameter),_temperature(temperature)
     {}     
}; 
class Planet : public celestialbody
{
   private: 
     bool _life ;
   public : 
     Planet (double mass,double diameter,bool life): celestialbody(mass,diameter),_life(life)
     {}  
};
double getforce (const celestialbody & S1 , const celestialbody & P1)
{
     return S1.getweight() * P1.getweight() ;
}
int main()
{
    Sun s1(3,30,300);
    Planet p1(2,20,true);
    cout << getforce (s1 , p1) << endl ;
}
