#include<iostream>
using namespace std ;

class A
{
  private:
  int l; int * d;
  public :
  A(int length)
  {
      l = length ;
      d = new int[l] ;  
  }
  A()
  {
      l = 0 ;  d = NULL ;  
  }
  ~A()
  {
     delete[] d;
  }
  int & operator [] (int index)
  {
     return d[index];
  }
  
};
int main ()
{
   A a1(5) ; 
   a1[2] = 22 ;
   cout << a1[2]<<endl ;
}
