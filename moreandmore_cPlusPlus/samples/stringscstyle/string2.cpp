#include<iostream>
using namespace std;
int main()
{
   
   char szString[255];
   cin >> szString;
   cout << "You entered: " << szString << endl;
   szString[4]='k';
   cout << "now it is : " << szString << endl;
   szString[5]='\0';
   cout << "now it is : " << szString << endl;
   cout << sizeof(szString) << endl;
   
   char szString1[255];
cin.getline(szString1, 255);
cout << "You entered: " << szString1 << endl;
cout << "haha " << szString1[4] << endl<<szString1[5]<<endl;
    
}
