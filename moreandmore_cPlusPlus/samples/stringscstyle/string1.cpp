#include<iostream>
using namespace std;
int main()
{
   char szString[] = "string";
   cout << sizeof(szString) << endl;
   for (int nChar = 0; nChar < sizeof(szString); nChar++)
   cout << static_cast<int>(szString[nChar]) << " ";
   szString[1] = 'l';
   cout<<endl<<szString<<endl;
   //cout << (int)(szString[nChar]) << " ";
    
}
