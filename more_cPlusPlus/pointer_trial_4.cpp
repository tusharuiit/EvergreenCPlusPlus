#include<iostream>

struct str1
{
   int abc ;
   str1 * def ;
};

int main ()
{
   str1 * ghi = new str1 ;
   ghi->abc = 111 ;
   std::cout << ghi->abc << std::endl ;
   
   str1 * jkl ;
   jkl->def = ghi ;
   std::cout << jkl->def->abc << std::endl ;
   
   //str1 * mno = NULL ;
   str1 * mno ;
   std::cout << mno->abc << std::endl ; 
   
   delete ghi ;
}
