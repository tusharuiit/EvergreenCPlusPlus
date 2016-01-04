#include<iostream>
using namespace std ; 

double average (double * grade )
{
   double sum = 0 ;
   for (int i = 0 ; i <= 4 ; i++) 
   {
       sum = sum + *(grade + i) ; 
   }
   sum /= 5 ;
   return sum ;  
}

int main()
{
   double grade [5] ; 
   for (int i = 0 ; i <= 4 ; i ++)
   {
       grade[i] = i+4 ;
   }
   cout << average (grade) << endl ; 
}
