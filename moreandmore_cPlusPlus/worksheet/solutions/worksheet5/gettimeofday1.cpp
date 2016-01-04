#include <iostream>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main ()
{
  time_t seconds;
  struct timeval t;
  seconds = time (NULL);
  double a = seconds/3600.0/24.0/365.0;
  cout<< "years since January 1, 1970 is "<< a<< endl;
  cout << 1e10/1e3 <<endl;
  gettimeofday (&t, NULL);
  cout<<t.tv_sec<<endl;
  return 0;
}
