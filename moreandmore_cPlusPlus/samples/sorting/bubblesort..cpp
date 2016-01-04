#include<iostream>
using namespace std  ;

void swap(int &a , int &b)
{
   a = a + b ;
   b = a - b ;
   a = a - b ;
}

int * bubblesort (int * data)
{
  for (int i = 8 ; i >= 0 ; i--)
  {
    for (int j = 0 ; j <=i ; j++)
     {
       if (data[j] > data[j+1])
       {
         swap(data[j],data[j+1]);
       }
     }
  }
}

int main()
{
   int data[10] = {4 , 66 , 34 , 54, 12 , 9 , 999 , 45, 63 , 12};
   bubblesort(data) ; 
   for (int i = 0 ; i <= 9 ; i++ )
   {
      cout << data[i]<< endl ;
   }
}
