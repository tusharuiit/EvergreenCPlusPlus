#include <iostream>
//#include <time.h>
#include <sys/time.h>
//#include <stdlib.h>
//#include <stdio.h>
using namespace std;
int main () 
{
   long sum=0;
   long diff[5];
   for (int i = 0;i<5;i++)
   {
   //int trand = (rand() % 4500000) + 500000;
        // Sleep for trand seconds
   struct timeval t1 , t2;
   char dummy1[1];
   usleep(3000000);
   gettimeofday(&t1,NULL);
   cout<<"quickly press return only or the world might end "<<endl;
   cin.getline(dummy1, 0);
   gettimeofday(&t2,NULL);
   diff[i] = (t1.tv_sec*1e6 + t1.tv_usec)-(t2.tv_sec*1e6 + t2.tv_usec);
   diff[i] *= (-1);
   cout<<"you alcoholic , it took u seconds of  "<<(double)diff[i]/1e6<<endl;
   sum += diff[i];
   }
   cout<<"on average it took u secons "<<sum/5.0/1e6<<endl;
   
}
