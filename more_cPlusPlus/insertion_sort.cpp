#include<iostream>
#include<cstdlib>

void create_random_list( int **arr , const int num ) ;
void print_list( int *arr , const int num ) ;
void insertion_sort_list( int * arr , const int num ) ;
void swap ( int *a , int *b ) ;

int main ()
{
// creating a random array
   // Number of numbers ??
   int num = 0 ;
   std::cout << " How many numbers do you want between 1 and 1000 ? " << std::endl ;
   std::cin >> num ;
   
   int * arr ;
   //std::cout << arr << std::endl ;
   srand(time(NULL)) ;
   create_random_list( &arr , num ) ;
   std::cout<<" And the UNSORTED numbers are " << std::endl ;
   print_list ( arr , num ) ;
   insertion_sort_list( arr , num ) ;
   std::cout<<" And the SORTED numbers are " << std::endl ;
   print_list ( arr , num ) ;
}

void create_random_list( int **arr , const int num )
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

void print_list( int *arr , const int num )
{
    
    int i = 0 ;
    for ( i = 0 ; i < num ; i++ )
    {
       std::cout << arr[i] << " ";
    }
    std::cout<<std::endl ;
}

void insertion_sort_list( int * arr , const int num )
{
   int i = 0 , j = 0 , val = 0 ;
   for ( i = 1 ; i <= num - 1 ; i++ )
   {  
      val = arr[i] ;
      for ( j = i - 1 ; j >= 0 ; j-- )
      {
         if ( val < arr[j] ) { arr[j+1] = arr[j] ; } else {break;}  
      }
      arr[j+1]=val;
   }
}

void swap ( int *a , int *b )
{
   *a = *a + *b ;
   *b = *a - *b ;
   *a = *a - *b ;
}
