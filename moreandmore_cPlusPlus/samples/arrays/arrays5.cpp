#include<iostream>
using namespace std ;
#include <cmath>

int main ()
{
  int ctr = 0 ;
  int a [4][4];
  for (int i = 0 ; i <= 3 ; i++ )
  {
    for (int j = 0 ; j <= 3 ; j++ )
  
    {
       a[i][j] = ctr ++ ;       
    }
  } 
  
  for (int i = 0 ; i <= 15 ; i++ )
  {
      cout << a[i] << endl ;       
  }
}
