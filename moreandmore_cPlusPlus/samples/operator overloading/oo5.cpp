#include<iostream>
using namespace std;
int main ()
{
   int a , b , c;
   //istream &in = cin;
   //in >> a >> b;
   //istream &in;
   //in>>a>>b;
   cin >> c;
   cout<<a<< " "<< b <<" "<< c <<endl ;
   
   int d = 5; int &f=c ;
   const int &e = d;
   cout <<e<<endl;
   //f = c;
   //&f=d;
   //f=&d;
  // f=c;
   f=f+11;
   cout<<" c =" <<c<<endl;
   
   int g = 7;
   //int h = &g;
   //int &h = &g;
}
