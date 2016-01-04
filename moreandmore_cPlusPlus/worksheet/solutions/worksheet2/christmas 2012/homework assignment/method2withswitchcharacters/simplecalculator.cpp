// 2nd tutorial from advanced programming  
#include <math.h>
//#include <cmath>
double sine(double var)
{
double ans = sin(var*3.14);
return ans;
}

double cosine(double var)
{
double ans = cos(var*3.14);
return ans;
}

double tangent(double var)
{
double ans = tan(var*3.14);
return ans;
}

double sum(double var1, double var2)
{
double sum = (var1+var2);
return sum;
}

double subtract(double var1, double var2)
{
double sub = (var1-var2);
return sub;
}

double multiply(double var1, double var2)
{
double pro = (var1*var2);
return pro;
}

double divide(double var1, double var2)
{
double quo = (var1/var2);
return quo;
}

double averagecalculator(double var1, double var2)
{
double avg = (var1+var2)/2.0;
return avg;
}

#include <iostream>

int main ()
{
  double var[2];
  double result;
  char choice;
  double averagecalculator(double, double);
  double sum(double , double );
  double subtract(double , double );
  double multiply(double , double );
  double divide(double , double );
  double sine(double);
  double cosine(double);
  double tangent(double);

  std::cout<<"enter 1 for addition \n enter 2 for subtraction \n enter 3 for multiplication \n enter 4 for division \n enter 5 for average \n enter 6 for sine \n enter 7 for cosine \n enter 8 for tangent \n"<<std::endl;

  std::cin>>choice;
   
  switch (choice)
{
  case '1':
   for(int i=0; i<2; i++)
    { 
      std::cout << "Please enter a number and press enter : "<<std::endl;
      std::cin >>var[i];
    }
     result=sum(var[0], var[1]);
     break;
  case '2':
     for(int i=0; i<2; i++)
     { 
      std::cout << "i l u Please enter a number and press enter : "<<std::endl;
      std::cin >>var[i];
    }
     result=subtract(var[0], var[1]);
     break;
  case '3':
      for(int i=0; i<2; i++)     
    { 
      std::cout << "Please enter a number and press enter : "<<std::endl;
      std::cin >>var[i];
    }
     result=multiply(var[0], var[1]);
     break;
  case '4':
     for(int i=0; i<2; i++)     
    { 
      std::cout << "Please enter a number and press enter : "<<std::endl;
      std::cin >>var[i];
    }
     result=divide(var[0], var[1]);
     break;
  case '5':
    for(int i=0; i<2; i++)     
    { 
      std::cout << "Please enter a number and press enter : "<<std::endl;
      std::cin >>var[i];
    }
     result=averagecalculator(var[0], var[1]);
     break;
  case '6':
    std::cin>>var[0];
    result=sine(var[0]);
    break;
  case '7':
    std::cin>>var[0];
    result=cosine(var[0]);
    break;
  case '8':
    std::cin>>var[0];
    result=tangent(var[0]);
    break;
  default:
     std::cout<<"u think u r smart ??";
     return 0;
}

   
  std::cout<<"the answer is "<<result<<std::endl;
  return 0;
}


