#include<iostream>
#include<cstdlib>

// The concept of a circular queue I guess is better to implement
// with a given initial array.
// In this case the maximum length of the array is 10
// We have a front and rear which at any point of time indicates the 
// starting and the ending indices of the array
// We have
// INSERT
// Now we come to insert thingy . 
// Initially the front and rear are both -1.In this situtation , if we have to insert,
// Then we add both front and rear to 0 and add the value to the array.
// If (rear = end index and front = 0) OR (rear = front - 1) then overflow , not possible
// else rear = rear + 1 , and add value 
// DELETE
// Now we have to implement the delete .
// If it is empty , then not possible
// else 
// In general front = front + 1 ;
// 1 special case if front = 0 and rear = 0 ; take care accordingly
// another special case is front = end index  , then front++ ;
// DISPLAY
// I guess display thingy is the easiest to implement . If front is less than the rear
// then cool . If rear is equal to front = -1 , then there is no element to display.
// If rear < front then go from front to end and then 0 to rear.
// If rear = front , but not equal to -1 , then there is only 1 element and print it.

void create_random_list( int **arr , const int num ) ;
void print_list( int *arr , const int num ) ;
void swap ( int *a , int *b ) ;
void insert ( int ** arr , int & beg , int & end ) ;
void display( int * arr , const int beg , const int end ) ; 
void remove ( int ** arr , int & beg , int & end ) ;

int main ()
{
   int max_length = 10 ;
   // creating a random array
   // Number of numbers ??
   int num = 0 , value = 0 ;
     
   int * arr = new int[max_length] ;
   int front = -1 , rear = -1 ;
   //std::cout << arr << std::endl ;
     int end_var = 0;
     while( end_var != -1 )
     {
     std::cout<<"What do you wanna do ? Insert = 1 | Delete = 2 | Display = 3 |"<<std::endl ;
     int choice1 = 0 ;
     std::cin>>choice1 ;

     if ( choice1 == 1 )
     { 
        insert ( &arr , front , rear ) ;
        std::cout <<"hello!! in insert before display end is " << rear <<std::endl ;
        display( arr , front , rear ) ; 
     }
     else if ( choice1 == 2 )
     { 
        remove ( &arr , front , rear ) ;
        display( arr , front , rear ) ;
     }
     else if ( choice1 == 3 )
     { 
        display( arr , front , rear ) ;
     }
     else
     {
        std::cout<<"Read Manual"<<std::endl;
     }
     std::cout<<"Enter -1 if you wanna end this, else any integer is fine"<<std::endl;
     std::cin>>end_var ;
     }
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

void insert ( int ** arr , int & beg , int & end )
{   
   if ((( beg == 0 )&&( end == 9 ))||(beg == (end + 1)))
   {
      std::cout<<"Overflow , cannot insert " <<std::endl ;
      return ; 
   }
   else if (( beg == -1 ) && ( end == -1))
   {
      beg = 0 ; end = 0 ;
   }
   else if ( end == 9 ) 
   {
      end = 0 ;
   }
   else
   {
      std::cout <<"hello!! "<<std::endl ;
      end++;
      std::cout <<"hello!! end is " << end <<std::endl ;
   }
   int value = 0;
   std::cout<<"Enter the value you wanna insert " <<std::endl ;
   std::cin>>value;
   (*arr)[end] = value ;
}

void display( int * arr , const int beg , const int end )
{
   if ((beg == -1) && (end == -1))
   {
      std::cout << " Nothing to display " << std::endl ;     
   }
   else if ( beg <= end)
   {
      int i = 0 ;
      for ( i = beg ; i <= end ; i++ )
      {
         std::cout<<"arr["<<i<<"]="<<arr[i]<<std::endl;
      } 
   }
   else if ( beg > end )
   {
      int i = 0 ;
      for( i = beg ; i <= 9 ; i++ )
      {
          std::cout<<"arr["<<i<<"]="<<arr[i]<<std::endl;
      }
      for( i = 0 ; i <= end ; i++ )
      {
          std::cout<<"arr["<<i<<"]="<<arr[i]<<std::endl;
      }
   }
}

void remove ( int ** arr , int & beg , int & end )
{
// remove
// If it is empty , then not possible
// else 
// In general front = front + 1 ;
// another special case is front = end index  , then front++ ;
// 1 special case = only 1 element , in that case both the indices are set to -1 
   if ( beg == -1 )
   {
      std::cout << " Not possible , underflow , no element is there " <<std::endl;      
   }
   else
   {
      if ( beg == end )
      {
         std::cout <<arr[beg] <<" has been deleted"<<std::endl;
         beg = -1 ; end = -1 ;
      }
      else if ( beg == 9 )
      {
         std::cout << arr[beg] <<"has been deleted "<<std::endl ;
         beg = 0 ;
      }
      else
      {
         std::cout << arr[beg] <<"has been deleted "<<std::endl ;
         beg++ ;
      }
   }
}
