/* sqrt example */
#include <iostream>
//#include <stdio.h>
#include <math.h>

int main ()
{
  char v[6] ;
  char *p2,*p3;
  p2=&v[2];
  p3=&v[3]; 
  std::cout<<"p2 is "<<p2<<"  and p3 is "<<&p3<<std::endl;   
}
