#include <iostream>
using namespace std;
int main()
{
 int nSize = 12;
 int *pnArray = new int[nSize]; // note: nSize does not need to be constant!
 for(int i = 0;i<=11;i++)
 {
    cout<<pnArray[i]<<endl;
 }
 
 delete[] pnArray;
}
