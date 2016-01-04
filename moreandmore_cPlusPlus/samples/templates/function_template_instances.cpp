#include<iostream>
#include<cstring>
using namespace std;

class A
{
   public :
   int a ;
   A() : a(5){}
   void printvar(){cout << a  << " i l u 2 " << endl ;}
};

template <typename T>
void bar(T & obj)
{
    obj.printvar() ; 
}

template <typename T>
void bar(T* obj)
{
    obj->printvar() ; cout << " i l u 3 " << endl ; 
}

int main ()
{
   A obj1 ;
   bar(obj1) ;
   bar(&obj1) ;
}
