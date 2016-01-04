#include <iostream>
using namespace std;
template <typename Type> // this is the template parameter declaration
Type max(Type tX, Type tY)
{
    return (tX > tY) ? tX : tY;
}

int main()
{
  int nValue = max(3, 7);
  cout<<nValue<<endl; // calls max(int, int)
  //cout<<max(3.5, 7)<<endl;
}
