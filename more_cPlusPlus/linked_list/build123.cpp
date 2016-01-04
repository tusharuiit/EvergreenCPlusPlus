#include<iostream>
#include"node.h"
#include"node.cpp"

int main ()
{
   node * root = NULL ;
   push( &root , 3 );
   push( &root , 2 );
   push( &root , 1 );
   print_list( root ) ;
}
