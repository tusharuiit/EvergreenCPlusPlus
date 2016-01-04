#include<iostream>
#include<cstdlib>

void create_random_list( int **arr , const int num ) ;
void print_list( int *arr , const int num ) ;
void mergesort_list( int * arr , int * newarr , const int beg , const int end ) ;
void swap ( int *a , int *b ) ;
void merge( int *arr , int * newarr , const int beg , const int endl , const int endr , const int end );
void sort( int * arr , int * newarr , const int beg , const int end ) ;

int main ()
{
// creating a random array
   // Number of numbers ??
   int num = 0 ;
   std::cout << " How many numbers do you want between 1 and 1000 ? " << std::endl ;
   std::cin >> num ;
   
   int * arr ;
   int *newarr = new int[num];
   //std::cout << arr << std::endl ;
   srand(time(NULL)) ;
   create_random_list( &arr , num ) ;
   std::cout<<" And the UNSORTED numbers are " << std::endl ;
   print_list ( arr , num ) ;
   mergesort_list( arr , newarr , 0 , num-1 ) ;
   std::cout<<" And the SORTED numbers are " << std::endl ;
   print_list ( newarr , num ) ;
   delete[] arr ;
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

void swap ( int *a , int *b )
{
   *a = *a + *b ;
   *b = *a - *b ;
   *a = *a - *b ;
}

void mergesort_list( int * arr , int * newarr , const int beg , const int end )
{
   std::cout << "In mergesort_list with beg and end =  " << beg << " and " << end << std::endl ;
   if( (end-beg) > 0 )
   {
      //std::cout << "I L U 1" << std::endl ;
      sort( arr , newarr , beg , end/2 ) ;
      sort( arr , newarr , end/2 + 1 , end ) ;
      merge( arr , newarr , beg , end/2 , end/2 + 1 , end );
   }
   return ;  
}

void sort( int * arr , int * newarr , const int beg , const int end )
{
   std::cout << "In sort with beg and end =  " << beg << " and " << end << std::endl ;
   if ( end - beg == 1 )
   {
      if( arr[beg] > arr[end] )
      {
         swap( &(arr[beg]) , &(arr[end]) ) ;
      }
      return ;
   }
   else if ( end - beg == 0 )
   {return ;}
   else
   {
      mergesort_list ( arr , newarr , beg , end ) ;
      return ;
   }
}

void merge( int *arr , int * newarr , const int beg , const int endl , const int begr , const int end )
{
   int left_mark = beg , right_mark = begr , index = beg ; 
   while ( (left_mark <= endl) && (right_mark <= end) )
   {
      if( arr[left_mark] < arr[right_mark] )
      {
         newarr[index] = arr[left_mark] ;
         left_mark++ ;
      }
      else
      {
         newarr[index] = arr[right_mark] ;
         right_mark++ ;
      }
      index++ ;
   }
   while ( left_mark <= endl )
   { 
       newarr[index] = arr[left_mark] ;
       left_mark++ ;
       index++ ;
   }
   while ( right_mark <= end )
   {
       newarr[index] = arr[right_mark] ;
       right_mark++ ;
       index++ ;
   } 
}
