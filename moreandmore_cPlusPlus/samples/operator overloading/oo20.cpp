#include<iostream>
using namespace std ;
class A
{
private:
   int a1 ;
   int *a2;
public:
   A(int p1 = 0 , int* ptr = NULL):a1(p1),a2(ptr){cout << "constructor in action "<<endl ;}
   ~A()
   {
      if (a2 != NULL)
      {delete a2;}
      a2 = NULL;
      cout << "destructor in action "<<endl ;
   }
   
   friend ostream& operator<<(ostream& out , const A & Aref)
   {
     out << "Aref.a1 = " << Aref.a1 << "  , *Aref.a2= "<<*(Aref.a2)<<endl;
     return out ;
   }
};    
int main()
{
    int *tmp = new int ;
    *tmp = 45 ; 
    A obj1(1 , tmp) ;
    cout << obj1 <<endl ;
    A obj2 = obj1 ;
    //cout <<obj2 <<endl;   
    
    //A obj3 = obj1 ;
    //cout <<obj3 <<endl; 
}
