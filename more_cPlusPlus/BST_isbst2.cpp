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
int maxvalue ( node * root ) ; 
int minvalue ( node * root ) ;
int isBST2( node * root ) ;
int isBSTRecur( node * root , int min , int max ) ;

int main ()
{
   int endvar = 0 , value = 0 , i = 0 ;
   int arr[15] = {20,10,30,5,15,25,40,1,7,13,17,23,27,37,45};
   node * root = NULL ;
   while ( i < 15)
   {
      value = arr[i];i++;
      
      insert( &root , value );
   }
   printtree(root , 0 );
   //root->value = 1 ;
   int result = -1 ;
   result = isBST2(root);
   std::cout<<"The result = "<<result<<std::endl ;
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

int minvalue ( node * root )
{
        if(root->leftnode == NULL)
        {
           return root->value ;
        }
        else
        {
           return minvalue( root->leftnode ) ;
        }
}

int maxvalue ( node * root )
{
        if(root->rightnode == NULL)
        {
           return root->value ;
        }
        else
        {
           return maxvalue( root->rightnode ) ;
        }
}

int isBST2( node * root )
{
   int INT_MIN = minvalue(root) , INT_MAX = maxvalue(root);
   return (isBSTRecur(root , INT_MIN , INT_MAX )) ;
}

int isBSTRecur( node * root , int min , int max )
{
// How exactly are the maximum and minimum values useful ? At any node or root,
// the node value should be less than the max and greater than or equal to the min.
// As we pass on to a lower level left node of the present root , we make the max value as the 
// value of the present root .
   if ( root == NULL )
   {
      return 1 ;
   }
   if(root->value < min){return 0 ;}
   if(root->value > max){return 0 ;}
   if(!(isBSTRecur(root->leftnode , min , root->value))){return 0 ;}
   if(!(isBSTRecur(root->rightnode , root->value + 1, max))){return 0 ;}
   return 1 ;
}