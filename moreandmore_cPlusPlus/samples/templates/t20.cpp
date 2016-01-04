#include<iostream>
using namespace std ;

template <typename T>
class Array
{
   private :
   int length ;
   T * d ;
   public :
   Array()
   {
      length = 0; d = new T [ length ] ;
   }
   Array(int l)
   {
      length = l; d = new T [ l ] ;
   }
   ~Array()
   {
      delete[] d;
   }
   T& operator [](int index)
   {
      return d[index] ;
   }
   int getlength() ;   
};

template <typename T>
int Array<T> :: getlength(){return length ;}

int main()
{
    Array<int> anArray(12);
    Array<double> adArray(12);
    Array<float> afArray(12);
    for (int nCount = 0; nCount < 12; nCount++)
    {
        anArray[nCount] = nCount;
        adArray[nCount] = nCount + 0.5;
        afArray[nCount] = nCount + 1.5;
    }
 
    for (int nCount = 11; nCount >= 0; nCount--)
        std::cout << anArray[nCount] << "\t" << adArray[nCount] << "\t" << afArray[nCount] <<std::endl;     
}
