#include<iostream>
#include<cstdlib>

void create_random_array( int **arr , const int num ) ;
//void print_array( int *arr , const int beg , const int end ) ;
void swap ( int *a , int *b ) ;
void push( int ** arr , const int num ) ;
void pull( int ** arr , const int num ) ;
void display( int ** arr , const int num ) ;

// What is a stack ? First , you have nothing ! Then you wanna do something !
// PUSH - then you add something , may require creation of new stack
// with length greate than 1
// PULL - Then you delete something . you may not have anything as well .
// Display - the stack contents . 
// Stack in our case is in the form of array 

int main ()
{
   int num = 0 , choice = 0 , end_var = 0 ;
   int * arr = NULL ;
   while ( end_var != -1 )
   {
   //std::cout << " Which operation do you choose ? " << std::endl ;
   //std::cin >> num ;   
   
   //std::cout << " &arr = " << &arr << std::endl ;
   srand(time(NULL)) ;   
   
   //choice = 3 ;
   choice = rand()%(2) + 1 ;
   std::cout<<" choice = " << choice << std::endl ;
      
   if ( choice == 1 )
   {
      num++ ;
      push( &arr , num ) ;   
   }

   if ( choice == 2)
   {
      if (num > 0)
      {
         num-- ;
         pull( &arr , num ) ;
      }
   
      else 
      {
         std::cout << " num = " << num << std::endl ; 
      }
   }

   if ( choice == 3)
   {
      display( &arr , num ) ;
   }
   
   std::cout << " Enter value of end_var. If -1 , then finish " << std::endl ;
   std::cin >> end_var ;
   }
}

void create_random_array( int **arr , const int num )
{
   //std::cout << arr << std::endl ;
   *arr = new int[num] ;
   //std::cout << arr << std::endl ;
   int i = 0 ;
   for( i = 0 ; i < num ; i++ )
   {
      (*arr)[i] = rand()%1000 + 1 ;      
   }
}

void swap ( int *a , int *b )
{
   *a = *a + *b ;
   *b = *a - *b ;
   *a = *a - *b ;
   //return ; 
}

void push( int ** arr , const int num )
{
   int value = 0 ;
   std::cout << "Enter value you wanna push !" << std::endl ;
   std::cin >> value ;
   int i = 0 ; 
   int * newarr = new int[num] ;
   for ( i = 0 ; i <= num - 2 ; i++ )
   {
      newarr[i] = (*arr)[i] ;
   }
   newarr[i] = value ;
   delete[] (*arr);
   (*arr) = newarr ;
   std::cout << "From push to display to push !" << std::endl ;
   display( &(*arr) , num ) ;
}

void pull( int ** arr , const int num )
{
   std::cout << " In pull , with num = " << num << std::endl ;
   if ( num > 0 )
   {
   int i = 0 ;
   int * newarr = new int[num] ;
   for ( i = 0 ; i <= num - 2 ; i++ )
   {
      newarr[i] = (*arr)[i] ;
   }
   delete[] (*arr);
   (*arr) = newarr ;
   display( &(*arr) , num ) ;
   }
   else if ( num == 0 )
   {
      delete (*arr);
   }
   
}

void display( int ** arr , const int num )
{
   std::cout << " In display " << std::endl ;
   int i = 0 ;
   for ( i = 0 ; i <= num - 1 ; i++ )
   {
      std::cout << (*arr)[i] << " " << std::endl ;
   }
}
