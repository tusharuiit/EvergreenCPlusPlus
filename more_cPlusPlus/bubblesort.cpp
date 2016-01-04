#include<iostream>
#include<cstdlib>
#include<ctime>


// The plan :
// Create a list of N random integers between 1 and 1000
// Pass them to the function to sort
// Print


void create_random_list( int **arr , const int num ) ;
void bubblesort_random_list( int * arr , const int num ) ;
void print_list( int *arr , const int num ) ;
void swap( int *a , int *b );

int main () 
{
   // Number of numbers ??
   int num = 0 ;
   std::cout << " How many numbers do you want between 1 and 1000 ? " << std::endl ;
   std::cin >> num ;
   
   int * arr ;
   srand(time(NULL)) ;
   create_random_list( &arr , num ) ;
   print_list ( arr , num ) ;
   bubblesort_random_list( arr , num ) ;
   print_list ( arr , num ) ;

}

void create_random_list( int **arr , const int num )
{
   *arr = new int[num] ;
   int i = 0 ;
   for( i = 0 ; i < num ; i++ )
   {
      (*arr)[i] = rand()%1000 + 1 ;      
   }
}

// The plan for bubble sort ?
// The largest number will be bubbled to the top . 
// We need a swap function
// In each round i , check till N-i , because rest of the numbers
// are the largest numbers , and they have been bubbled to the top
void bubblesort_random_list( int * arr , const int num )
{
   int i = 0 , j = 0 ;
   for ( i = 0 ; i < num-1 ; i++ )
   {
      for ( j = 0 ; j < num - i - 1 ; j++ )
      {
         if ( arr[j] > arr[j+1] )
         {
            swap( &(arr[j]) , &(arr[j+1]) ) ;
         }
      }
   }
}

void print_list( int *arr , const int num )
{
    std::cout<<" Voila , and the numbers are " << std::endl ;
    int i = 0 ;
    for ( i = 0 ; i < num ; i++ )
    {
       std::cout << arr[i] << std::endl ;
    }
    std::cout<<std::endl ;
}

void swap ( int *a , int *b )
{
   *a = *a + *b ;
   *b = *a - *b ;
   *a = *a - *b ;
}
