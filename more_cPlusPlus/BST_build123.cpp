#include<iostream>

// a: by calling newNode() three times, and using three pointer variables
// b: by calling newNode() three times, and using only one pointer variable
// c: by calling insert() three times passing it the root pointer to build up the tree

struct node
{
   int value ;
   node * left ;
   node * right ;
};

void build123a() ;
void build123b() ;
void build123c() ;
node * newNode(const int) ;
void insert( node ** , const int ) ;
void printtree( node * , const int ) ;

int main ()
{
   build123a() ;
   build123b() ;
   build123c() ;
}

void build123a()
{
   std::cout<<"Entered build123a() "<<std::endl ;

   node* node1 = NULL ;
   node* node2 = NULL ;
   node* node3 = NULL ;

   node1 = newNode(2) ;
   node2 = newNode(1) ;
   node3 = newNode(3) ;
   node1->left = node2 ;
   node1->right = node3 ;
   
   printtree( node1 , 0 ) ;
   std::cout<<"Exiting build123a() "<<std::endl ;
}
void build123b()
{
   std::cout<<"Entered build123b() "<<std::endl ;
   
   node * root = NULL ;
   root = newNode( 2 ) ;
   root->left = newNode( 1 ) ;
   root->right = newNode( 3 ) ;
   printtree( root , 0 ) ;

   std::cout<<"Exiting build123b() "<<std::endl ;
}
void build123c()
{
   std::cout<<"Exiting build123c() "<<std::endl ;

   node * root = NULL ;
   insert( &root , 2 ) ;
   insert( &root , 1 ) ;
   insert( &root , 3 ) ;
   printtree( root , 0 ) ;

   std::cout<<"Exiting build123c() "<<std::endl ;
}
node * newNode( const int value )
{
   node * newnodum = new node ;
   newnodum->left = NULL ;
   newnodum->right = NULL ;
   newnodum->value = value ;
   return newnodum ;
}

void printtree( node * nodum , const int level )
{
   if(nodum == NULL)
   {
      return ;
   }
   else
   {
      std::cout << "The value in this node is " << nodum->value << " in level "<< level <<std::endl ;
      printtree( nodum->left , level + 1 ) ;
      printtree( nodum->right , level + 1) ;      
   }
}

void insert( node ** root , const int value )
{
   if ( *root == NULL )
   {
      *root = newNode( value );
      return ;
   }
   else
   {
      if ( value <= ((*root)->value) )
      {
         insert( &((*root)->left) , value );
      }
      else
      {
         insert( &((*root)->right) , value );
      }
   }
}
