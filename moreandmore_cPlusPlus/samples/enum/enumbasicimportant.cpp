#include<iostream>
using namespace std ;
namespace myspace {
enum Colour 
{
   Red , Green ,  Blue
};
enum TUMColours 
{
   //Blue ,Orange ,White ,Black
   Orange ,White ,Black , Blue
};}


int main()
{
   myspace :: Colour colour = myspace :: Blue ; 
   cout<<" colour = " << colour <<endl;
   cout<<" i l u "<<endl;
}
