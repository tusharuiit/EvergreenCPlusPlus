#include<iostream>
#include<cstdlib>

// So , now we come to the point of implementing a queue.
// First , we create an array , this is our given queue .
// The array's structure is such that the 0 index is the one that has been
// entered the first
// and the num - 1 is the index for the last entered entry. In this case ,
// In such a scenario if we insert , then we add to the last index + 1 
// In such a scenario if we delete , we delete 0 th index and shift up to lower index
// 0th index was the first entered of all the arrays , so according to FILOsophy

// If the array's structure is such that the (num - 1) index is the one that has been
// entered the first. 
// In such a scenario if we insert , then we add to the 0th index and shift down all by 1
// In such a scenario if we delete , we delete num - 1 th index

// So, in our case the structure is such that the 0th index has been entered first .

void create_random_list( int **arr , const int num ) ;
void print_list( int *arr , const int num ) ;
void swap ( int *a , int *b ) ;
void insert ( int ** arr , const int length ) ;
void display( int * arr , const int length ) ; 
void remove ( int ** arr , const int length ) ;

int main ()
{
// creating a random array
   // Number of numbers ??
   int num = 0 , value = 0 ;
     
   int * arr ;
   //std::cout << arr << std::endl ;
   std::cout<< " The menu " << std::endl ;
   std::cout << " Do you want to start from scratch ? Enter 1 " << std::endl ;
   std::cout << " Do you wanna play with an already created list ? Enter 2 "<< std::endl ;
   int choice = 0 ; std::cin>>choice ;
   if( choice == 2 )
   {
     std::cout << " How many numbers do you want between 1 and 1000 ? " << std::endl ;
     std::cin >> num ;
     srand(time(NULL)) ;
     create_random_list( &arr , num ) ;
     std::cout<<" And the queue numbers are " << std::endl ;
     print_list ( arr , num ) ;
   }
   else if ( choice == 1 )
   {
     
     int end_var = 0 , length = 0 ;
     while( end_var != -1 )
     {
     std::cout<<"What do you wanna do ? Insert = 1 | Delete = 2 | Display = 3 |"<<std::endl ;
     int choice1 = 0 ;
     std::cin>>choice1 ;

     if ( choice1 == 1 )
     { 
        insert ( &arr , ++length ) ;
        display( arr , length ) ; 
     }
     else if ( choice1 == 2 )
     { 
        if(length==0)
        {std::cout<<"Length = 0,Removal not possible"<<std::endl;}        
        else 
        {
          remove ( &arr , --length ) ;
          display( arr , length ) ;
        }
     }
     else if ( choice1 == 3 )
     { 
        if(length==0){std::cout<<"Length = 0,Display not possible"<<std::endl;}
        else
        { 
          display( arr , length ) ;
        }
     }
     else
     {
        std::cout<<"Read Manual"<<std::endl;
     }
     std::cout<<"Enter -1 if you wanna end this, else any integer is fine"<<std::endl;
     std::cin>>end_var ;
     } 
   }
   else 
   {
      std::cout<<"Read Manual"<<std::endl;
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

void swap ( int *a , int *b )
{
   *a = *a + *b ;
   *b = *a - *b ;
   *a = *a - *b ;
}

void insert ( int ** arr , const int length )
{
   int i = 0 , value = 0 ;
   std::cout<<"In insert"<<std::endl ;
   std::cout<<"Enter the value that you wanna insert at the last ! "<<std::endl ;
   std::cin>>value;
   int * newarr = new int[length] ;
   newarr[length - 1] = value ;
   for( i = 0 ; i <= length - 2 ; i++ )
   {
      newarr[i] = (*arr)[i] ;  
   }
   if(length > 1)
   {delete[] (*arr) ;}
   (*arr) = newarr ;
}

void display( int * arr , const int length )
{
   int i = 0 ;
   std::cout<<"In Display"<<std::endl ;
   for ( i = 0 ; i <= length - 1 ; i++ )
   {
      std::cout<<arr[i]<<std::endl ;
   }
}

void remove ( int ** arr , const int length )
{
   std::cout<<"In remove"<<std::endl ;
   int * newarr = new int[length] ;
   int i = 0 ;
   for ( i = 0 ; i <= length - 1 ; i++ )
   {
      newarr[i] = (*arr)[i+1] ;
   }
   delete[] (*arr) ;
   (*arr) = newarr ;
}
