#include<iostream>

int main()
{
   int * arr0 = new int ;
   int * arr1 = new int ;
   int * arr2 = new int[1] ;
   int * arr3 = new int[1] ;
   int * arr4 = new int[2] ;
   
   delete[] arr0 ;
   delete[] arr1 ;
   delete arr2 ;
   delete arr3 ; 
}
