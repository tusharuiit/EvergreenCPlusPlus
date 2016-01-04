#include<iostream>
namespace mySpace 
{
enum Colour 
{
   Red , Green ,  Blue
};
enum TUMColours 
{
   Blue ,Orange ,White ,Black
   //Orange ,White ,Black
};
}

int main()
{
   //mySpace::Colour colour = mySpace::Blue ;
   //mySpace::Colour colour = mySpace::Colour Blue ;
   //std::cout<<colour<<std::endl;
   mySpace::Colour colour = mySpace::Green ;
   std::cout<<colour<<std::endl;
   mySpace::TUMColours colour1 = mySpace::White ;
   std::cout<<colour1<<std::endl;
   return 0;
}
