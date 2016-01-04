#include<iostream>
#include<cstdlib>
/*The steps are:
Pick an element, called a pivot, from the list.
Reorder the list so that all elements with values less than the pivot come before the pivot, while all elements with values greater than the pivot come after it (equal values can go either way). After this partitioning, the pivot is in its final position. This is called the partition operation.
Recursively apply the above steps to the sub-list of elements with smaller values and separately to the sub-list of elements with greater values.
The base case of the recursion is lists of size zero or one, which never need to be sorted.*/

/*function quicksort(array)
     if length(array) ≤ 1
         return array  // an array of zero or one elements is already sorted
     select and remove a pivot element pivot from 'array'  // see '#Choice of pivot' below
     create empty lists less and greater
     for each x in array
         if x ≤ pivot then append x to less
         else append x to greater
     return concatenate(quicksort(less), list(pivot), quicksort(greater)) // two recursive calls*/

/* First pass the array to the function quicksort . 
   Find a pivot index , in my case it is the random number generation .
   
   */

void create_random_list( int **arr , const int num ) ;
void print_list( int *arr , const int num ) ;
void quicksort_random_list( int * arr , const int beg , const int end ) ;
int partition( int * arr , int beg , int end , int pivot_index ) ;
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
   quicksort_random_list( arr , 0 , num - 1 ) ;
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
       std::cout << arr[i] << std::endl ;
    }
    std::cout<<std::endl ;
}

void quicksort_random_list( int * arr , const int beg , const int end )
{
   if ( beg >= end ) { return ; }

   srand(time(NULL)) ;
   int num = end - beg + 1 ;
   int pivot_index = (rand())%(num) + beg ;

   pivot_index = partition( arr , beg , end , pivot_index ) ;
   quicksort_random_list( arr , beg , pivot_index - 1 ) ;
   quicksort_random_list( arr , pivot_index + 1 , end ) ;
}

int partition( int * arr , int beg , int end , int pivot_index )
{
   int i = beg ;
   int pivot = arr[pivot_index] ;
   swap( &(arr[pivot_index]) , &(arr[end]) ) ;
   pivot_index = end ;
      
   while( pivot_index > i )
   {
      if ( arr[i] > pivot )
      {
         swap( &(arr[i]) , &(arr[pivot_index]) ) ;
         pivot_index-- ;
         swap( &(arr[i]) , &(arr[pivot_index]) ) ;
      }
      else 
      { i = i + 1 ; }
   }
   arr[pivot_index] = pivot ;
   return pivot_index ;
}

void swap ( int *a , int *b )
{
   *a = *a + *b ;
   *b = *a - *b ;
   *a = *a - *b ;
}
