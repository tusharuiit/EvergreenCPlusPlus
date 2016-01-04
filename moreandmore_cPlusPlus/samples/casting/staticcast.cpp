#include <iostream>
int main()
{
  int nValue = 100;
  nValue = static_cast<int>(nValue / 40.0);
  //nValue = (nValue / 40.0);
  std::cout<< nValue<<std::endl;
}
