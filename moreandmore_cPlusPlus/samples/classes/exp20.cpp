#include <iostream>
using namespace std;
class X
{
   public :
   int i;
   void y(X&); 
};
class Y
{
  void y(X&x)
  {
    x.i = 2;
  }
};


int main()
{
    
}
