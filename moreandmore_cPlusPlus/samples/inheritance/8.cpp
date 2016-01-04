//
#include<iostream>
using namespace std;
class A
{
     public :
     int vara ;
     int * ptra ;
    
     void foo(){cout << "inside foo of A" << endl ;}
     virtual void bar(){cout << "inside bar of A" << endl ;}
     A()
     {
       cout << " inside constructor of A " << endl ;
       vara = 10 ;
       ptra = new int ; * ptra = 1;
     }
     ~A()
     {
       cout << " inside destructor of A " << endl ; 
       if (ptra != NULL)
       {
         delete ptra ;
       }
        
     }
};
class B : public A 
{
     public :
     int vara;
     int varb ; 
     int * ptrb ;
    
     void foo(){cout << "inside foo of B" << endl ;}
     //virtual void bar(){cout << "inside bar of B" << endl ;}
     void foo1 (){cout << "inside foo1 of B" << endl ;}
     B()
     {
        cout << " inside constructor of B " << endl ; 
        vara = 19;
        varb = 20 ;
        ptrb = new int ; * ptrb = 2 ;
     }
     ~B()
     {
       cout << " inside destructor of B " << endl ;
       if (ptrb != NULL)
       {
         delete ptrb ;
       } 
     }
};
class C : public B 
{
     int varc ;
     int * ptrc;
   public : 
     void foo(){cout << "inside foo of C" << endl ;}
     virtual void bar(){cout << "inside bar of C" << endl ;}
     C()
     {
        cout << " inside constructor of C " << endl ; 
        varc = 30 ;
        ptrc = new int ; * ptrc = 2 ;
     }
     ~C()
     {
       cout << " inside destructor of C " << endl ;
       if (ptrc != NULL)
       {
         delete ptrc ;
       } 
     }
};
int main ()
{
  A* a2=new A();B* b2=new B();A* a3=new B();  A* a4=new C();
  a2->foo();b2->foo();a3->foo();
  // very important a3->foo1();
  a2->bar();b2->bar();a3->bar();a4->bar();
  //delete a2 , b2 , a3 , a4  ;  
  cout << "a2->vara " << a2->vara <<endl ;
  cout << "b2->vara " << b2->vara <<endl ;
  cout << "a3->vara " << a3->vara <<endl ;
  //cout << "a3->varb " << a3->varb <<endl ; 
}
