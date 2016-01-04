#include<iostream>
using namespace std ;
class CelestialBody 
{
 private : 
  double mass ;
  static int a ;
  static int b ;
 public :
  CelestialBody(double m)
  { mass = m ; b++ ; } 
  static int getNumberOfCallsToGetMass()
  {return a;}
  static int getnumberofcelestialbodiescreated()
  {return b;}
  double getMass() const
  {
    a++;return mass ;
  } 
};
int CelestialBody::a = 0 ;
int CelestialBody::b = 0 ;
class Sun : public CelestialBody {
public :
Sun(double m):CelestialBody(m){}
};
class Planet : public CelestialBody {
public :
Planet(double m):CelestialBody(m){}
};
int main ()
{ 
  CelestialBody * a = new Planet (12) ;
  CelestialBody * b = new Sun (13) ;
  CelestialBody * c = new Sun (14) ;
  a->getMass();b->getMass();
  cout <<" totalnumberofcallstogetMass = " << CelestialBody::getNumberOfCallsToGetMass() << endl ;
  cout <<" getnumberofcelestialbodiescreated = " << CelestialBody::getnumberofcelestialbodiescreated() << endl ;
  }
