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
int sametree ( node * , node * ) ;

int main ()
{
   int value1 = 0 , value2 = 0 , i = 0 ;
   int arr1[7] = {20,10,30,5,15,25};
   int arr2[7] = {20,10,30,5,15,25};
   node * root1 = NULL ; node * root2 = NULL ;
   while ( i < 7 )
   {
      value1 = arr1[i] ; value2 = arr2[i] ; i++;      
      insert( &root1 , value1 );
      
      insert( &root2 , value2 );            
   }

   printtree(root1 , 0 );
   printtree(root2 , 0 );
   std::cout<<std::endl ;
   int result = -1 ;
   result = sametree( root1 , root2 ) ;
   std::cout<<"result = "<<result << std::endl ;
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

int sametree ( node * root1 , node * root2 )
{
   if (( root1 != NULL ) && (root2 != NULL ))
   {
      return (((root1->value) == (root2->value))&&(sametree(root1->leftnode , root2->leftnode))&&(sametree(root1->rightnode , root2->rightnode))) ;
   }
   else
   {
       if (( root1 == NULL ) && (root2 == NULL ))
       {
          return (true) ;
       }
       else
       {
          return (false) ;
       }
   }
}
