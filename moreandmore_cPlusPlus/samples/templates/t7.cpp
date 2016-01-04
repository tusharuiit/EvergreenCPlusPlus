#include<iostream>
using namespace std;
template <class T>
class Orbit 
{
  private :
  T myCelestialBody ;
  public :
  Orbit ( Sun &body ){ myCelestialBody = body ; }
  void computemass()
  {
    cout << myCelestialBody.getMass() << endl ;
  }
};
class Sun
{
 public :
 int mass ;
 Sun(int m) : mass(m){}
 int getMass(){return mass;} 
};
int main ()
{
  Sun s1(40) ;
  Orbit<Sun> myOrbit (s1) ;
  myOrbit.computemass() ;
}
