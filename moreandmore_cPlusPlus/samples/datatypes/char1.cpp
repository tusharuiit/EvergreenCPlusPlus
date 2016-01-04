
#include <iostream>
int main()
{
  int nValue = 48;
  //char ch = nValue;
  char ch = static_cast<char>(nValue);
  std::cout<< ch<<std::endl;
}
