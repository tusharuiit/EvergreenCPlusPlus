#include<iostream>

struct node
{
   int a ;
   int b ;
};

int main()
{
   node n1 ;
   n1.a = 1 ; n1.b = 2 ;
   node n2 ;
   n2.a = 10 ; n2.b = 11 ;
   std::swap ( n1 , n2 ) ;
   std::swap ( n1 , n2 ) ;
   std::cout << "n1.a = "<< n1.a << std::endl ;
   std::cout << "n2.a = "<< n2.a << std::endl ;

   node * n3 = &n1 ;
   node * n4 = &n2 ;
   std::cout << "n3->a = "<< n3->a << std::endl ;
   std::cout << "n4->a = "<< n4->a << std::endl ;

   std::swap( n3 , n4 );

   std::cout << "n3->a = "<< n3->a << std::endl ;
   std::cout << "n4->a = "<< n4->a << std::endl ;

   std::swap( *n3 , *n4 );
   std::cout << "n1.a = "<< n1.a << std::endl ;
   std::cout << "n2.a = "<< n2.a << std::endl ;

   std::cout << "n3->a = "<< n3->a << std::endl ;
   std::cout << "n4->a = "<< n4->a << std::endl ;
}
