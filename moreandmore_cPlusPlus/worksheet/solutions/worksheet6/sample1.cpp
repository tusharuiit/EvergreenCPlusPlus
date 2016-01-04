#include <math.h>
#include <iostream>
void sample(int b[][])
{
    for(int i=0; i<=1; i++) 
     {
         for(int j=0;j<=1;j++)
         { 
              b[i][j]=b[i][j]+1;
         }
     }
    
    
    for(int i=0; i<=1; i++) 
     {
         for(int j=0;j<=1;j++)
         { 
              std::cout<<"b["<<i<<"]"<<"="<<b[i][j]<<std::endl;
         }
     }
    //return b;
}
int main ()
{
    int n;
    int a[n][n];
    std::cin>>n;
    //int m[2];
    for(int i=0; i<n; i++) 
     {
         for(int j=0;j<n;j++)
         { 
              std::cout<<"a["<<i<<"]"<<"="<<a[i][j]<<std::endl;
         }
     }
    sample(a,n);
    for(int i=0; i<n; i++) 
     {
         for(int j=0;j<n;j++)
         { 
              std::cout<<"a["<<i<<"]"<<"="<<a[i][j]<<std::endl;
         }
     }
}
