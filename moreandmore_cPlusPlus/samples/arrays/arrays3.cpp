#include<iostream>
int main()
{
  int n;
  std::cin>>n;
  //int array[n];
  int *array = new int[n]; // note: nSize does not need to be constant!
  array[3] = 334;
  std::cout<<"array[3] =     "<<array[3]<<std::endl;
  delete[] array;
  //array[1]= 22;
}

