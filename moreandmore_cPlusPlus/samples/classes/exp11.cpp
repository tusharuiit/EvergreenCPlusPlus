#include <iostream>
using namespace std;
int main ()
{
  int c = 5;
  int &x = c;
  int *y = &x;;
  x = 6;
  *y = 7;
  cout << c << endl;
  cout << x << endl;
}
