#include<iostream>
using namespace std;
class A
{
     int a ;
     int * ptra ;
   public : 
     void foo(){cout << "inside foo of A" << endl ;}
     virtual void bar(){cout << "inside bar of A" << endl ;}
     A()
     {
       cout << " inside constructor of A " << endl ;
       ptra = new int ; * ptra = 1;
     }
      virtual ~A()
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
     int * ptrb ;
   public : 
     void foo(){cout << "inside foo of B" << endl ;}
     //virtual void bar(){cout << "inside bar of B" << endl ;}
     void foo1 (){cout << "inside foo1 of B" << endl ;}
     B()
     {
        cout << " inside constructor of B " << endl ; 
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
     int * ptrc;
   public : 
     void foo(){cout << "inside foo of C" << endl ;}
     virtual void bar(){cout << "inside bar of C" << endl ;}
     C()
     {
        cout << " inside constructor of C " << endl ; 
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
  cout<<"deleting a2 "<<endl ;
  delete a2 ; 
  cout<<"deleting b2 "<<endl ;
  delete b2 ;
  cout<<"deleting a3 "<<endl ;
  delete a3 ;
  cout<<"deleting a4 "<<endl ;
  delete a4  ;  
}
