#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str1 ;
    char strBuf[8];
    // Read up to 10 characters
    cin.getline(str1, 8);
    cout << str1 << endl;
    //cout << strBuf[1] << endl;
    bool b;
    //b=(strBuf=="ilove\0");
    if (str1.compare("ilove") == 1)
    cout <<  " match!! " << "\n";
    //cout << b << endl;
    // Read up to 10 more characters
    //cin.getline(strBuf, 11);
    //cout << strBuf << endl;
    //return 0;
}
