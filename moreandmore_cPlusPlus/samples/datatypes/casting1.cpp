
#include <iostream>
int main()
{
  int nValue1 = 10;
  int nValue2 = 4;
  float fValue = (float)nValue1 / nValue2;
  float fValue1 = nValue1 / (float)nValue2;
  float fValue2 = (float)(nValue1 / nValue2);
  std::cout<< fValue<<std::endl;
  std::cout<< fValue1<<std::endl;
  std::cout<< fValue2<<std::endl;
}
