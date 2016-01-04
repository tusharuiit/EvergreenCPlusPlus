#include<iostream>
using namespace std ;

class INR
{
   private : 
   int rupee ;
   public :
   INR(int ru):rupee(ru)
   {cout << " o life " << endl ;}
   friend bool operator>(INR &r1,INR &r2)
   {
      return (r1.rupee > r2.rupee) ; 
   }
   friend bool operator<(INR &r1,INR &r2)
   {
      return !(r1>r2) ; 
   }
   void operator+=(INR &r2)
   {
      rupee = rupee + r2.rupee ;
   }
   void operator/=(int nums)
   {
      rupee = (rupee) / nums ;
   }
   friend ostream& operator<< (ostream& out ,const INR &r2)
   {
      out << "average = " << r2.rupee << endl ;
      return out ;
   }
    
};
template <typename T>
T avg(T *r,int nums)
   {
      cout << "i love you 11 " << endl ;
      T sum(0);
      for(int i = 0 ; i < nums ; i++)
      {
          sum += r[i] ;
      }
      sum/=(nums);
      cout << "i love you " << endl ; 
      return sum ;
   } 

int main ()
{
   INR r1(5),r2(10) ;
   cout << (r1 > r2) << endl ;
   cout << (r1 < r2) << endl ;
   INR ARR[] = {INR (11),INR (12),INR (13),INR (14),INR (0)} ;
   cout << avg(ARR , 5) << endl ;
}
