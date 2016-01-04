
#include <iostream>
int main()
{
  int a = 3; int b = ++a; //(that is want we want)
  int c = 3; int d = c++; //(that is something different)
  int e = (d+=a)++; //(also very funny)


  std::cout<< b<<std::endl;
  std::cout<< d<<std::endl;
  std::cout<< e<<std::endl;  
}
