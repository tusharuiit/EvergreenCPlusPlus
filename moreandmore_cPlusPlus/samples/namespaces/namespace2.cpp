#include<iostream>

enum Colour 
{
   Red , Green ,  Blue
};
enum TUMColours 
{
   Blue ,Orange ,White ,Black
   //Orange ,White ,Black
};


int main()
{
   
   Colour colour = Green ;
   std::cout<<colour<<std::endl;
   TUMColours colour1 = White ;
   std::cout<<colour1<<std::endl;
   return 0;
}
