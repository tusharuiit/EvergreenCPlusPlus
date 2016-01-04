//Return the number of nodes in a list
#include"node.h"
#include<iostream>
//#include"create_linked_list.cpp"

int length_while(node*head);
int length_for(node*head);
node * create_linked_list( node * head ) ;
void print_linked_list( node * root );
node * newnode( int );

int main()
{
   node * root = NULL ;   
   root = create_linked_list ( root ) ;
   print_linked_list( root ) ;
   int len_while = length_while ( root ) ;
   int len_for = length_for ( root ) ;
   std::cout<<"Length of list_while = "<< len_while << std::endl ;
   std::cout<<"Length of list_for = "<< len_for << std::endl ;
}

int length_while( node * root )
{
   int length = 0 ;
   while (root != NULL)
   {
      length++ ;
      root=root->nodeptr ;
   }
   return length ;
}

int length_for( node * root )
{
   int length = 0 ;
   for ( root=root ; root!=NULL ; root=root->nodeptr  )
   {
      length++ ;
   }
   return length ;
}

node * create_linked_list ( node * root )
{
   int i = 0 ; node * newnodum = NULL ;node * temp = NULL;
   newnodum = newnode(i*i) ;temp = newnodum ; root = newnodum ;
   for ( i = 1 ; i < 10 ; i++ )
   {
      newnodum = newnode(i*i) ;
      temp->nodeptr = newnodum ;
      temp = temp->nodeptr ;
   }
   return root ;
}

void print_linked_list ( node * root )
{
   while (root!=NULL)
   {
      std::cout<<root->value<<std::endl;
      root=root->nodeptr;
   }
}

node * newnode ( int value )
{
   node * newnodum = new node ;
   newnodum->value = value ;
   newnodum->nodeptr = NULL ;
   return newnodum ;
}
