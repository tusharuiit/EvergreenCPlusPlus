#include<iostream>
using namespace std ;

class String {
public :

char * _data ;
int _length ;
//public :
String ( ) ;
void copyFromOtherString ( const String & string ) ;
};

String :: String (): _data(0),_length (0){}
void String :: copyFromOtherString ( const String & string ) 
{
 
 _data = string._data ;
 _length = string._length ;
 cout << _data << "sexy 5 " << endl ;
 cout << &_data << "sexy 6 " << endl ;
 cout << &string._data << "sexy 7 " << endl ;
}

int main ()
{
   String *str1 = new String ;
   String  str2 ;
   str2._data = "i love you ";
   str1->copyFromOtherString(str2) ; 
   delete str1;
   cout << str2._data << "sexy 7 " << endl ;
   //cout<< &(str1->_data) <<" sexy 1 " << endl ;
   //cout<< &(str2._data) <<" sexy 2 " << endl ;   
   
}
