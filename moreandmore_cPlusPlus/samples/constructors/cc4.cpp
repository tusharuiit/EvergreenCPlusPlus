#include<iostream>
using namespace std ;

struct IntegerEntry 
{
  int value ;
  IntegerEntry * next ;

  void printList() const
  //void printList() const
  {
    cout << value << endl ;
  }
  //void append (IntegerEntry * nextEntry);
};

void doSomething ( const IntegerEntry & entry ) 
{
   entry.printList();
}

int main()
{
  IntegerEntry a1;
  a1.value = 55 ;
  doSomething(a1);
}
