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
int isBST( node * );

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
   printtree( root , 0 );
   //root->value = 21 ;
   int result = -1 ;
   result = isBST(root);
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

int isBST( node * root )
{
// The logic that we are going to use here is that it is a binary tree 
// if it is greater than or equal to the maximum value in the left tree
// and it is less than the minimum value in the right tree.
// That should be all. Why ?
   if ( root == NULL )
   {
       return 1 ;
   }
   else if (((root->leftnode) == NULL )&& ((root->rightnode) == NULL))
   {
       return 1 ;
   }
   else if ( (root->leftnode == NULL) && ((root->rightnode) != NULL))
   {
       if(((root->value)<minvalue(root->rightnode))&&(isBST(root->rightnode)))
       {
          return 1 ;
       }
       else
       {
          return 0 ;
       }
   }
   else if ( (root->rightnode == NULL) && ((root->leftnode) != NULL))
   {
       if(((root->value)>=minvalue(root->leftnode))&&(isBST(root->leftnode)))
       {
          return 1 ;
       }
       else
       {
          return 0 ;
       }
   }

   else 
   {
   if(((root->value)>=(maxvalue(root->leftnode)))&&((root->value)<minvalue(root->rightnode))&&(isBST(root->leftnode))&&(isBST(root->rightnode)))
   {
      return 1 ;
   }
   else
   {
      return 0 ;
   }
   }
}
