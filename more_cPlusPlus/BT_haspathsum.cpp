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
void lookup ( node * , const int , const int ) ;
int haspathsum_2 ( node * , int) ;

int main ()
{
   int endvar = 0 , value = 0 , i = 0 ;
   int arr[16] = {20,10,30,5,15,25,40,3,7,13,17,23,27,37,45 , 29};
   node * root = NULL ;
   while ( i < 16)
   {
      //std::cout<<"What value do you want to enter?"<<std::endl;
      //std::cin>>value ;
      value = arr[i];i++;
      
      insert( &root , value );
            
      //std::cout<<"Do you want to enter values ? If yes , any intger except -1 else -1"<<std::endl;
      //std::cin>>endvar ;      
   }
   printtree(root , 0 );
   
   std::cout<<std::endl ;
   int sum_result_2 = -1 , sum = 42;
   sum_result_2 = haspathsum_2( root , sum );
   std::cout<<"sum_result_2 = "<< sum_result_2 << std::endl ;
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


int haspathsum_2 ( node * root , int sum )
{
   if ( root == NULL )
   {
      return ( sum == 0 );
   }
   else
   {
      int subsum = sum - (root->value) ;
      return ((haspathsum_2( root->leftnode , subsum )) || (haspathsum_2( root->rightnode , subsum )));
   }
}
