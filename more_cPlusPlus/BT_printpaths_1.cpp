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
void printpaths ( node * ) ;
void printpaths_1 ( node * ) ;
void printpathsrecur ( node * , int * , int ) ;
void printpathsrecur_1 ( node * , int * , int );
void printarray( int * , int );

int main ()
{
   int endvar = 0 , value = 0 , i = 0 ;
   int arr[7] = {20,10,30,5 , 15 , 25 , 40};
   node * root = NULL ;
   while ( i < 7 )
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
   printpaths( root ) ;
   std::cout<<"Hi , new try !"<<std::endl;
   printpaths_1( root ) ;
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

void printpaths ( node * root )
{
   int * arr = NULL ; int len = 0 ;
   printpathsrecur ( root , arr , len ) ;
}

void printpaths_1 ( node * root )
{
   int arr[10] ;
   printpathsrecur_1 ( root , arr , 0 ) ;
}

void printpathsrecur ( node * root , int * arr , int len )
{
   if (( root->leftnode == NULL ) && ( root->rightnode == NULL ))
   {
      int i = 0 ;
      for( i = 0 ; i <= len - 1 ; i++ )
      {
         std::cout<<arr[i]<<",";
      }
      std::cout<<std::endl ;
   }
   if ( (root->leftnode) != NULL )
   {
      int * arr_left = new int[len+1] ;
      int i = 0 ;
      for ( i = 0 ; i <= len - 1 ; i++ )
      {
         arr_left[i] = arr[i] ;
      }
      arr_left[i] = root->value ; 
      delete[] arr ;
      arr = arr_left ;
      printpathsrecur ( root->leftnode , arr , len + 1 ) ;
   }
   if ( (root->rightnode) != NULL )
   {
      int * arr_right = new int[len+1] ;
      int i = 0 ;
      for ( i = 0 ; i <= len - 1 ; i++ )
      {
         arr_right[i] = arr[i] ;
      }
      arr_right[i] = root->value ; 
      delete[] arr ;
      arr = arr_right ;
      printpathsrecur ( root->rightnode , arr , len + 1 ) ;
   }
}

void printpathsrecur_1 ( node * root , int * arr , int len )
{
   if ( root == NULL )
   {
      return ;
   }
   arr[len] = root->value ; 
   if(( root->leftnode == NULL ) && ( root->rightnode == NULL ))
   {
      printarray( arr , len + 1 ) ;
   }
   else
   {
      printpathsrecur_1 ( root->leftnode , arr , len + 1 );
      printpathsrecur_1 ( root->rightnode , arr , len + 1 );      
   }   
}

void printarray ( int * arr , int len )
{
   int i = 0 ;
   for ( i = 0 ; i <= len - 1 ; i++ )
   {
      std::cout<<arr[i]<<",";
   }
   std::cout<<std::endl ;
}
