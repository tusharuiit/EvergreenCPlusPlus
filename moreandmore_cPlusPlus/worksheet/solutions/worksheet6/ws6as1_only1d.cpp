#include <math.h>
#include <iostream>
double compute_residual_norm(double x[], double b[],int n);
void jacobi_iteration(double x[], double b[],int n)
{
     int c=0;
     double euclidnorm=1.0;
     double xold[(n+2)*(n+2)];
     float h;
     while(euclidnorm>0.001 )
     {
     c=c+1;
     std::cout<<"c is"<<c<<" and "<<" norm is "<<euclidnorm<<std::endl;
     for(int i=0; i<=(n+2)*(n+2); i++) 
     {
          
              xold[i]=x[i];
         
     } 
     h=1.0/(n+1);
     for(int i=1; i<=n; i++) 
     {
         for(int j=1;j<=n;j++)
         { 
              x[j*(n+2)+i]=(-pow(h,2.0)/4.0)*(b[j*(n+2)+i]-(1/pow(h,2.0))*(xold[(j-1)*(n+2)+i]+xold[(j+1)*(n+2)+i]+xold[j*(n+2)+i+1]+xold[j*(n+2)+i-1]));
         }
     }
     euclidnorm=compute_residual_norm(x,b,n); 
     }
     //return x;
}

double compute_residual_norm(double x[], double b[],int n)
{
     double euclidnorm=0.0;
     double temp=0.0;
     float h;
     h=1.0/(n+1);
     for(int i=1; i<n+1; i++) 
     {
         for(int j=1;j<n+1;j++)
         { 
             temp =  b[j*(n+2)+i]- x[(j-1)*(n+2)+i]*(1.0/(pow(h,2.0)))- x[(j+1)*(n+2)+i]*(1.0/(pow(h,2.0)))- x[j*(n+2)+i-1]*(1.0/(pow(h,2.0)))- x[j*(n+2)+i+1]*(1.0/(pow(h,2.0))) + (4.0/(pow(h,2.0)))*x[j*(n+2)+i];       
             euclidnorm= euclidnorm + pow(temp,2.0); 
         }
     }
     euclidnorm=(1.0/n)*(sqrt(euclidnorm));
     return euclidnorm; 
}



int main ()
{
     
     int n;
     const double pi= 3.14159; 
     std::cout<<"input the value of n "<<std::endl;
     std::cin>>n;
     
     double x[(n+2)*(n+2)];
     //double m[n+2][n+2];
     double abscissa;
     double ordinate;
     double b[(n+2)*(n+2)];
     //float abscissa,ordinate;
     for(int i=0; i<(n+2)*(n+2); i++) 
     {
          
          x[i]=0.0;  
         
     } 
     // b and E are the same 
     
     for(int i=0; i<=n+1; i++) 
     {
         for(int j=0;j<=n+1;j++)
         {   
             abscissa=(double)j/(n+1);
             ordinate=(double)i/(n+1);
             b[j*(n+2)+i]=-2.0*pow(pi,2.0)*sin(pi*abscissa)*sin(pi*ordinate);  
         }
     }
     jacobi_iteration(x,b,n);
     for(int i=0; i<=n+1; i++) 
     {
         for(int j=0;j<=n+1;j++)
         {   
             std::cout<<x[j*(n+2)+i]<<std::endl; 
         }
         
     }     
     
}
