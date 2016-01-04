
#include <iostream>
int main()
{
  int a = 3;
  bool b = (a==3);
  bool c = (a=0);
  int d = 0;
  bool e = (d==0);
  bool f = (d=0);

  std::cout<< b<<std::endl;
  std::cout<< c<<std::endl;
  
  std::cout<< e<<std::endl;
  std::cout<< f<<std::endl;
  //std::cout<< fValue2<<std::endl;
}
