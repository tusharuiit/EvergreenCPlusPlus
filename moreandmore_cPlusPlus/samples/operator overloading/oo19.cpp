#include<iostream>
using namespace std ;
class A
{
private:
   int a1 ;
   int *a2;
public:
   A(int p1 = 0 , int* ptr = NULL):a1(p1),a2(ptr){cout << "constructor in action "<<endl ;}
   A(const A & Aref)
   {
      cout << "user's copy constructor in action 1 "<<endl ;
      cout << "life is tuff " << a1 << endl ;
      a1=Aref.a1 ;
      cout << "user's copy constructor in action 3 " << *a2 << "  " << a2<<"  "<<endl ;
      if (a2 != NULL){a2 = NULL;}
      cout << "user's copy constructor in action 2 "<<endl ;
      a2 = new int ;
      *a2 = *(Aref.a2);
      cout << "user's copy constructor in action "<<endl ; 
   } 
   
   ~A()
   {
      if (a2 != NULL)
      {delete a2;}
      a2 = NULL;
      cout << "destructor in action "<<endl ;
   }
   
   A& operator= (const A& Aref)
   {
      cout << "inside the overloaded assignment operator " << endl ; 
      if (Aref.a2 != NULL)
      {
         a2 = new int ;
         *a2 = *(Aref.a2) ;
      }
      else a2 = NULL;
      return *this;
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
    *tmp = 47 ; 
    A obj1(1 , tmp) ;
    cout << obj1 <<endl ;
    A obj2 ( obj1) ;
    cout <<obj2 <<endl;   
    
    A obj3 , obj4 ;
    obj4 = obj3 = obj1 ;
    cout << "obj3 = "<< obj3 <<endl ;
    cout << "obj4 = "<< obj4 <<endl ;
}
