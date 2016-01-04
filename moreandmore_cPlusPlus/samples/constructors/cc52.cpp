#include<iostream>
using namespace std ;
# include <string>
int main ()
{
  std :: string myString0 ;
  std :: string myString1 ("hello world") ;
  std :: string myString2 ( myString1 ) ;
  std :: string myString3 ="hello MPG";
  std :: string myString4 = myString3 ;
  cout << myString1.length() << "flag 1 " << endl;
  cout << myString1 << "flag 2 " << endl ;
  myString3 += myString1 ;
  cout << myString3 << "flag 3 " << endl ;
}
