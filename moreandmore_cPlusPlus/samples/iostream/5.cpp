#include<cstdlib>
//#include<cstdio>
#include<iostream>
int main ()
{
  using namespace std ;
  cout << "enter age " << endl ; 
  int age ; 
  cin>>age ; 
  if(age <= 0)
  {
     //using namespace std ;
     cerr << "oops invalid age" << endl ;
     exit(1) ;
  }
  cout << " you entered " << age << " years old " << endl ; 
}
