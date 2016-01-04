#include<iostream>
using namespace std ;
struct date
{
 int _month ,day ; 
 date (int month , int day)
 {
   _month = month; day = day;
 }
 ~date(){};
 void nextday ()
 {
   cout << " u suck " << endl ;
 }
};
int main ()
{
   cout << " i love u " << endl;
   //date date1 ;
   date date2(7 , 8) ;
   //date1._month = 12 ; 
   //date1.day = 31 ;
   date2.nextday();
}
