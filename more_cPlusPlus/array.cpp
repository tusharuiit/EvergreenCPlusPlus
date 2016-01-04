#include<iostream>
#include<cstdlib>

/*cout<<"\n\n\n\n---------- Array ---------- \n";
cout<<"\nMain Menu\n\n1. Insert an Elemnet\n
                      2. Insert an Element at given Position\n
                      3. Delete an Element by given Value\n
                      4. Delete an Element from given Position\n
                      5. Exit\n\nEnter your choice : ";
*/

void create_random_array( int **arr , const int num ) ;
void print_array( int *arr , const int beg , const int end ) ;
void swap ( int *a , int *b ) ;
void insert_element_position ( int **arr , int num , int index , int value ) ;
void delete_element_position ( int **arr , int num , int index ) ;
void delete_element_value_first ( int **arr , int num , int value ) ; 

int main ()
{
   int num = 0 , value = 0 , position  = 0 , choice = 0 ;
   std::cout << " How many numbers do you want between 1 and 1000 ? " << std::endl ;
   std::cin >> num ;
   
   int * arr ;
   //std::cout << arr << std::endl ;
   srand(time(NULL)) ;   
   
   choice = rand()%(2) + 1 ;
   std::cout<<" choice = " << choice << std::endl ;
      
   create_random_array( &arr , num ) ;
   std::cout<<" And the ORIGINAL array is " << std::endl ;
   print_array ( arr ,  0 , num - 1 ) ;
   
   if ( choice == 1 )
   {
     value = rand()%1000 + 1 ;
     std::cout<<" value = " << value << std::endl ;
     position = rand()%(num) ;
     std::cout<<" position index = " << position << std::endl ;
     insert_element_position ( &arr ,  num , position , value ) ;
     print_array ( arr ,  0 , num ) ;
   }

   if ( choice == 2)
   {
      position = rand() % num  ;
      std::cout<<" position index = " << position << std::endl ;
      delete_element_position ( &arr , num , position ) ;
      print_array ( arr ,  0 , num - 2 ) ;
   }

   if ( choice == 3)
   {
      position = rand() % num  ;
      value = arr[position] ;
      std::cout<<" value = " << value << std::endl ;
      delete_element_value_first ( &arr , num , value ) ;
      print_array ( arr ,  0 , num - 2 ) ;
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

void print_array( int *arr , const int beg , const int end )
{    
    int i = 0 ;
    for ( i = beg ; i < end - beg + 1 ; i++ )
    {
       std::cout << "arr["<<i<<"] = " << arr[i] << " ";
    }
    std::cout<<std::endl ;
}

void swap ( int *a , int *b )
{
   *a = *a + *b ;
   *b = *a - *b ;
   *a = *a - *b ;
   //return ; 
}

void insert_element_position ( int **arr , int num , int index , int value )
{
    int * newarray = new int[num + 1] ;
    int i = 0 ;
    for ( i = 0 ; i <= index - 1 ; i++ )
    {
       newarray[i] = (*arr)[i] ;
    }
    newarray[index] = value ;
    for ( i = index + 1 ; i <= num ; i++ )
    {
       newarray[i] = (*arr)[i-1] ;
    }
    delete[] (*arr) ;
    *arr = newarray ;
}

void delete_element_position ( int **arr , int num , int index )
{
   int * newarray = new int[num - 1] ;
   int i = 0 ; 
   for ( i = 0 ; i <= index - 1 ; i++ )
   {
      newarray[i] = (*arr)[i] ;
   }   
   for ( i = index ; i <= num - 2 ; i++ )
   {
      newarray[i] = (*arr)[i+1] ;
   }
   delete[] (*arr) ;
   *arr = newarray ;
}

void delete_element_value_first ( int **arr , int num , int value )
{
   int index = 0 , i = 0 ;
   int * newarr = new int[num - 1] ;
   for ( i = 0 ; i <= num - 1 ; i ++ )
   {
      if ( value == (*arr)[i])
      {
          index = i ;
          break ;
      }
      newarr[i] = (*arr)[i] ;
   }
   if( i == num )
   {
      std::cout<< "Value does not exist " << std::endl ;
      return ;
   }
   for ( i = index + 1 ; i <= num - 1 ; i++ )
   {
      newarr[i-1] = (*arr)[i] ;
   }
   delete[] (*arr) ;
   *arr = newarr ;
}
