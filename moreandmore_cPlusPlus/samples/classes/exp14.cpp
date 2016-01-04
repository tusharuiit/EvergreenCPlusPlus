#include <iostream>
using namespace std;
int main ()
{
string sSource("my string");
cout << sSource << endl;
cout << (sSource, 3) << endl;
//string sOutput(sSource);
//cout << sOutput;
string sOutput(sSource, 3);
cout << sOutput<< endl;
string sOutput2(sSource, 3, 4);
cout << sOutput2 << endl;
}
