#include <iostream>
using namespace std;
int main ()
{
  double x  ;
  cout<<"x=?";
  cin>>x;
  cout << "max error is "<<(double)(x-0)*(x-.2)*(x-.4)*(x-.6)*(x-.8)*(x-1)*((1/720)*(958.4685)*(-1))<<"\n" ;
 //cout << "max error is "<<(x*(958.4685)*(-1))<<"\n" ;
}
