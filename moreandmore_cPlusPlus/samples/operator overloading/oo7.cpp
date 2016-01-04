#include<iostream>
using namespace std;
int main ()
{
   int c;
   
   cin >> c;
   
   int d = 5; 
   const int &e = d;
   cout <<e<<endl;
   //e = e + 2 ; 
   d = d +2 ;
   cout<<" e =" <<e<<endl;
   
}
