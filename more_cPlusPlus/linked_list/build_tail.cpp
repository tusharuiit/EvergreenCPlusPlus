#include<iostream>
#include"node.h"
#include"node.cpp"

void create_list( node ** root );
void push_tail ( node ** root , int value ) ;

int main ()
{
   node * root = NULL ;
   create_list( &root );
   print_list( root ) ;
}

void create_list( node ** root )
{
   int i = 0 ;
   (*root) = createnode(0);
   //std::cout << " I L U " << std::endl ;
   //print_list( *root ) ;
   for ( i = 1 ; i < 10 ; i++ )
   {
      push_tail ( root , i ) ;
   }
}

void push_tail ( node ** root , int value )
{
   node * newptr = (*root) ;
   while ( newptr != NULL )
   {
      newptr = newptr->nodeptr ;
   }
   newptr = createnode( value ) ;
}
