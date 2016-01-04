#include <iostream>
#include <time.h>
//#include <sys/time.h>
//#include <stdlib.h>
//#include <stdio.h>
using namespace std;
int main () 
{
  struct timeval t1, t2;
  gettimeofday(&t1,NULL);
  cout << t1.tv_sec << endl;
  //cout<<time(NULL)<< endl;
}
