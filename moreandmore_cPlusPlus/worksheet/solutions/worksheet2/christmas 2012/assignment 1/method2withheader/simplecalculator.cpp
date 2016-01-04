

#include <iostream>
//#include "averagecalculator.h"
int main ()
{
  double var[2];
  double result;
  char oper;
  double averagecalculator(double, double);
  double sum(double , double );
  double subtract(double , double );
  double multiply(double , double );
  double divide(double , double );
  

  for(int i=0; i<2; i++)
  { 
   std::cout << "Please enter an integer value and press enter : "<<std::endl;
   std::cin >>var[i];
  }   

  std::cout <<"the integers you entered are "<<var[0]<<" and "<<var[1]<<" now , what operation do you want on them ?? \n + is for addition \n - is for subtraction \n * is for multiplication \n / is for division \n a is for average \n"<<std::endl;
  std::cin>>oper;

  if (oper == '+')
   result = sum(var[0],var[1]); 
  else if (oper == '-')
   result = subtract(var[0],var[1]); 
  else if (oper == '*')
   result = multiply(var[0],var[1]);
  else if (oper == '/')
   result = divide(var[0],var[1]);
  else if (oper == 'a')
   result = averagecalculator(var[0],var[1]);
  else 
   {
    std::cout<<"u think u are smart ??";
    return 0;
   }
 
  std::cout<<"the answer for "<<oper<<" is "<<result<<std::endl;
  return 0;
}


