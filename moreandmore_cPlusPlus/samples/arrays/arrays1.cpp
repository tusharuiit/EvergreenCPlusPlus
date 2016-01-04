#include<iostream>
int main()
{
  int gradesBSc , gradesMSc[5] ;
  //gradesMSc[5] = 2.3;
  for(int i=0;i<5;i++)
  {
     gradesMSc[i] = i*2; ;
  }
  int *p = gradesMSc ;
  for(int i=0;i<5;i++)
  {
     std::cout<<*(p+i)<<std::endl;
  }
  
}
