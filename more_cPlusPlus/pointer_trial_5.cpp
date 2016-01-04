#include<iostream>

struct str1
{
   int abc ;
   str1 * def ;
};

int main ()
{
   str1 * mno = NULL ;
   //str1 * mno ;
   std::cout << mno->abc << std::endl ; 
}
