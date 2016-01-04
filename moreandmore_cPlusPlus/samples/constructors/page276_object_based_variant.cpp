#include<iostream>
using namespace std ;
#include <cmath>

class Vector 
{
  public :
  double x [3];
  double length;
  /*Vector(int a=3,int b=2,int c =1) 
  {(x[0]) = (a);(x[1]) = (b);(x[2]) = (c);}*/
  Vector(double a=3,double b=2,double c =1) 
  {(x[0]) = (a);(x[1]) = (b);(x[2]) = (c);
  computeLength ( );
  lengthtoTerminal ( );
  cout << "END !! " << endl ; 
  }
  void computeLength ( );
  void lengthtoTerminal ( );
  void datatoTerminal ( );
  void scale (double value);
};

void Vector :: computeLength ( ) 
{
  length = std :: sqrt ( x [0]*x [0]
  + x[1]*x[1] + x[2]* x [2]) ;
  
}

void Vector :: lengthtoTerminal ( ) 
{
   cout << length << endl ;
}

void Vector :: datatoTerminal ( ) 
{
   for(int i = 0 ; i<=2;i++)
   {
     cout << "x["<<i<<"]="<<x[i] << endl ;
   }
}

void Vector :: scale (double value)
{
   for(int i = 0 ; i<=2;i++)
   {
     x[i] \= value;
   }
   computeLength ( );
}

int main ()
{
  Vector a(1 , 1 , 1) ;
  a.computeLength() ;
  a.lengthtoTerminal() ;
  a.datatoTerminal() ;
  
  Vector *b = new Vector(2,2,2) ;
  b->computeLength() ;
  b->lengthtoTerminal() ;
  b->datatoTerminal() ;
  delete b ;
}
