#include<iostream>
using namespace std;
class celestialbody
{
     public :
     //int e , f ;   
     virtual void plotToCout() const ;
};
class sun : public celestialbody 
{
     public :
     //int a , b , c;   
     virtual void plotToCout() const {cout <<"inside plot of sun "<<endl;}
     void plotToCout1() const {cout <<"inside plot of sun "<<endl;}
};
class planet : public celestialbody 
{
     public :
     //int d ;   
     virtual void plotToCout() const {int b = 5 ;cout <<"inside plot of planet and b is "<<b<<endl;}
};
int main ()
{
   //celestialbody * a = new celestialbody();
   celestialbody * b = new sun () ;
   celestialbody * c = new planet () ;
   sun * d = new sun () ;
   //a->plotToCout();
   b->plotToCout();
   c->plotToCout();
   cout << sizeof (sun) << " and "<<sizeof(planet)<<" and "<<endl;//<<sizeof(celestialbody)<<endl;
   cout << sizeof (*b) << " and "<<sizeof(*c)<<" and "<<sizeof (*d)<<endl ;
   cout << sizeof (b) << " and "<<sizeof(c)<<" and "<< sizeof(d)<<endl;
   //cout << " b->e "<<b->e << endl ;
}
