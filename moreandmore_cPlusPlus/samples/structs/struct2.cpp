#include<iostream>
struct molecule
{
  double x[3];
};
int main()
{
   
   molecule m1[3];
   molecule * m2= new molecule [3];
   m2++;
}
