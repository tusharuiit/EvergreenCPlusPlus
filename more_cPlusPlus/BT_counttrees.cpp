#include<iostream>

// So, now I have to build up my binary tree , which is ordered.
// I guess building is the same as inserting. You take a value and put it in the
// right place. that is it !! So , take a value , if there is no tree already, 
// then create a new node via a different function and put the value to this.
// If there is already a tree , then pass it to the right node or left node as
// per the value passed. And does the value will be put.

// 2 ways to implement. one via & and the other via w/o any pointer change.

struct node
{
   int value ;
   node * leftnode ;
   node * rightnode ;
};

void insert( node** , const int );
node * newnode();
void printtree( node * , const int );
void doubletree ( node * ) ;

int main ()
{
   int value = 0 , i = 0 ;
   int arr[3] = {20,10,30};
   node * root = NULL ;
   while ( i < 3 )
   {
      value = arr[i];i++;      
      insert( &root , value );            
   }

   printtree(root , 0 );
   std::cout<<std::endl ;
   doubletree( root ) ;
   printtree(root , 0 );
}

void insert( node ** root, const int value )
{
   if ( *root == NULL )
   {
      *root = newnode();
      (*root)->value = value ;
      (*root)->leftnode = NULL ;
      (*root)->rightnode = NULL ;
      return ;
   }
   else
   {
      if ( value <= ((*root)->value) )
      {
         insert( &((*root)->leftnode) , value );
      }
      else
      {
         insert( &((*root)->rightnode) , value );
      }
   }
}

node * newnode ()
{
   node * newnodum = new node ;
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
      printtree( nodum->leftnode , level + 1 ) ;
      printtree( nodum->rightnode , level + 1) ;      
   }
}

void doubletree ( node * root )
{
   if ( root == NULL )
   {
      return ;
   }
   else
   {
      doubletree(root->leftnode) ;
      doubletree(root->rightnode) ;
      node * newnodum = new node ;
      newnodum->value = root->value ;
      newnodum->rightnode = NULL ;
      newnodum->leftnode = root->leftnode ;
      root->leftnode = newnodum ;
   }
}
