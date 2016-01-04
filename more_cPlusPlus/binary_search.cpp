#include<iostream>
#include<cstdlib>

// So , what is the philosophy of the binary search ??
// We have a sorted array which is printed out in front of us . 
// Then we take a value through random number generation and get its index
// Now we send the value , array address and the length of array
// to the function binary_search . 
// Now what about the function binary_search ?? 
// You have the [sorted]array , value and the length of the array . 
// Now you divide into 2 parts , with their boundaries (beginning and end indices)
// Then you know in which region the given value lies !
// Now , again pass the value and that part of the array and the length or the beginnning 
// and the end indices .
// The checking goes on and then you recurse to a array part which has one or 2 elements only.
// 

void create_random_list( int **arr , const int num ) ;
void print_list( int *arr , const int num ) ;
void quicksort_random_list( int * arr , const int beg , const int end ) ;
int partition( int * arr , int beg , int end , int pivot_index ) ;
void swap ( int *a , int *b ) ;
void binary_search ( int * arr , const int value , const int beg , const int end ) ;

int main ()
{
// creating a random array
   // Number of numbers ??
   int num = 0 , value = 0 ;
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
   
   value = rand() % num ;
   value = arr[value] ;
   std::cout<<" Value to be searched for is " << value << std::endl ;
   if ( (value >= arr[0]) and (value <= arr[num - 1]))
   {   
       binary_search ( arr , value , 0 , num - 1 ) ;
   }
   else
   {
      std::cout << "value out of range " << std::endl ;
   }
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

void binary_search ( int * arr , const int value , const int beg , const int end )
{
    if ( (end - beg == 1) )
    {
       if(value==arr[beg]){std::cout<<"The index where value is found is " << beg<<std::endl ;return;}
       if(value==arr[end])
       {std::cout<<"The index where value is found is " << end<<std::endl ;return;}
       else
       {
          std::cout<<"value not found :( " << std::endl ;
          return;
       }
    }
    else if(end - beg > 1)
    {
       int left = (beg + end)/2 ;
       int right = (beg + end)/2 + 1 ;
       if( (value <= arr[left]) and (value >= arr[beg]) )
       {
          binary_search ( arr , value , beg , left ) ;
       }
       else 
       {
          binary_search ( arr , value , right , end ) ;
       }
    }
    else if(end - beg == 0)
    {
       if(value==arr[beg]){std::cout<<"The index where value is found is " << beg<<std::endl ;return;}
       else
       {
          std::cout<<"value not found :( " << end<<std::endl ;
          return;
       }
    }
}
