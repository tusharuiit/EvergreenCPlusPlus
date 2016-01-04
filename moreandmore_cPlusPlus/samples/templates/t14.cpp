#include<iostream>
using namespace std ;

template <typename T>
class Orbit 
{
  private :
  T myCelestialBody ;
  public :
  Orbit ( CelestialBody body )
  {
      myCelestialBody(1,body.getMass());
  }
  void setTimeStep ( double tau ) ;
  void computeNextPosition ( ) 
  {
     double a = myCelestialBody.getMass ()* 2;
  }
};

class CelestialBody
{
   private :
   double mass ; 
   public :
   CelestialBody(int m):mass(m)  {}
   double getMass(){return mass;}
};

class Sun : public CelestialBody
{
   private :
   double temperature ; ; 
   public :
   Sun(double t , double m):CelestialBody(m),temperature (t)  {}
};
int main()
{
   Sun mySun(1,2) ;
   Orbit<Sun> myOrbit(mySun);
}
