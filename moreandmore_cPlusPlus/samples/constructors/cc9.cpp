#include<iostream>
using namespace std ;

int main ()
{
  int nValue = 5;
  const int &rnRef = nValue;
 
  nValue = 6; // illegal -- rnRef is const
  rnRef = 7 ;
}
