#include <iostream>
#include <string>
using namespace std;

class PoweredDevice
{
   public :
   int a ;
};
 
class Scanner: public PoweredDevice
{
};
 
class Printer: public PoweredDevice
{
};
 
class Copier: public Scanner, public Printer
{
};

int main()
{
  Copier c1;
  cout << "sizeof Copier = "<< sizeof(Copier)<<endl;
  cout << "sizeof c1 = "<< sizeof(c1)<<endl;
  cout << "c1.Scanner::a = "<<c1.Scanner::a<<endl;
  cout << "c1.Printer::a = "<<c1.Printer::a<<endl;
  //cout << "c1.PoweredDevice::a = "<<c1.PoweredDevice::a<<endl;
}
