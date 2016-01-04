#include<iostream>
using namespace std ;
#include <cmath>

class Vector 
{
  public :
  double x0 , x1 , x2;
  double length;
  Vector(int a=3,int b=2,int c =1) : x0(a),x1(b),x2(c)
   {}
};

void computeLength ( Vector& vector ) 
{
  vector.length = std :: sqrt ( vector . x0*vector . x0
  + vector.x1*vector .x1 + vector.x2*vector . x2) ;
  cout << vector.length << endl ;
}

int main ()
{
  Vector a(1 , 1 , 1) ;
  computeLength(a) ;
  //computeLength (*c) ;
}
