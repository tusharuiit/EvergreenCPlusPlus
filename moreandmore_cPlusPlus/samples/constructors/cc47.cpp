#include<iostream>
using namespace std ;
#include <cmath>

class Vector 
{
  public :
  double const x [3];
  double length;
  Vector(int a=3,int b=2,int c =1) 
  {(x[0]) = (a);(x[1]) = (b);(x[2]) = (c);}
};

void computeLength ( Vector& vector ) 
{
  vector.length = std :: sqrt ( vector . x [0]*vector . x [ 0 ]
  + vector.x[1]*vector .x[1] + vector.x[2]*vector . x [ 2 ]) ;
  cout << vector.length << endl ;
}

int main ()
{
  Vector a(1 , 1 , 1) ;
  computeLength(a) ;
  //computeLength (*c) ;
}
