#include<iostream>
#include"node.h"

void create_list( node ** root ) ;
void push(node**root , int value);
void print_list( node * root ) ;
node * createnode(int value) ;

int main ()
{
   node * root = NULL ;
   create_list( &root ) ;
   print_list( root ) ;
}

void create_list( node ** root )
{
   int i = 0 ; 
   for ( i = 0 ; i < 10 ; i++ )
   {
      push( root , i*i) ; 
   }
}

void push(node**root , int value)
{
   node * newnodum = createnode(value) ;
   newnodum->nodeptr = (*root) ;
   (*root) = newnodum ;
}

void print_list( node * root )
{
   for ( root = root ; root != NULL ; root = root->nodeptr )
   {
      std::cout<<root->value<<std::endl ;
   }
}

node * createnode(int value)
{
   node * newnodum = new node ;
   newnodum->nodeptr = NULL ;
   newnodum->value = value ;
   return newnodum ;
}
