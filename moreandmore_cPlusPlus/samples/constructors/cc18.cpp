#include<iostream>
using namespace std ;

int main ()
{
  int nValue = 5;
  void *pVoid = &nValue;
 
  // can not dereference pVoid because it is a void pointer
 
  //int *pInt = static_cast<int*>(pVoid); // cast from void* to int*
 
  //cout << *pInt << endl; // can dereference pInt
    cout << *(static_cast<int*>(pVoid)) << endl ;
}  
