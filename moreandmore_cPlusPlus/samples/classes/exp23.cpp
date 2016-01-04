#include <iostream>
using namespace std;
int main()
{ 
  int nValue = 5;
const int &rnRef = nValue;
nValue = 56;
cout<<rnRef<<endl;
}
