#include<iostream>
#include<cstdlib>

// What to do ?
// Aim is to find the index of the given value
// create array
// ask user for input value or create value
// send the array and the value to the check function
// create check function !

void check( int * arr , const int value , const int length) ;
void create_random_list( int **arr , const int num ) ;
void print_list( int *arr , const int num ) ;

int main ()
{
   // creating a random array
   // Number of numbers ??
   int num = 0 , value = 0 ;
   std::cout << " How many numbers do you want between 1 and 1000 ? " << std::endl ;
   std::cin >> num ;

   int * arr ;
   srand(time(NULL)) ;
 
   create_random_list( &arr , num ) ;
   std::cout<<" And the UNSORTED numbers are " << std::endl ;
   print_list ( arr , num ) ;

   std::cout << " The array has been created . you want to enter the number ? choose 1 " << std::endl ;
   std::cout << " Or do you want me to generate it randomly ? choose 2 " << std::endl ;   
   int choice = 0 ; 
   std::cin >> choice ; 
   if ( choice == 1 )
   {
       std::cout << " OK , now tell your value !! " << std::endl ;
       std::cin >> value ;
       check( arr , value , num ) ;
   }
   else if ( choice == 2 )
   {
       value = rand() % num ;
       value = arr[value] ;
       check( arr , value , num ) ;
   }
   else
   {
       std::cout << " You should go and read the manual ! " << std::endl ;
   }
   std::cout << " Party is over ! " << std::endl ;
}

void check( int * arr , const int value , const int length )
{
   int i = 0 ;
   for ( i = 0 ; i <= length - 1 ; i++ )
   {
      if ( arr[i] == value )
      {
          std::cout << " The value " << value << " is found in index " << i << std::endl ;
          return ;
      }
   }
   if ( i == length )
   {
      std::cout << " The value " << value << " is not found :( " << std::endl ;
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
