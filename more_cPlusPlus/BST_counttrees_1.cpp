#include<iostream>

int counttrees( int ) ;

int main ()
{
   int count = 0 ;
   count = counttrees(1);
   std::cout<<"Number of structurally different trees with 1 = "<<count<<std::endl;
   count = counttrees(2);
   std::cout<<"Number of structurally different trees with 2 = "<<count<<std::endl;
   count = counttrees(3);
   std::cout<<"Number of structurally different trees with 3 = "<<count<<std::endl;
   count = counttrees(4);
   std::cout<<"Number of structurally different trees with 4 = "<<count<<std::endl;
}

int counttrees( int numkeys )
{
   // HISTORIC !! if(numkeys == 1)
   if ( numkeys == 0 )
   {
      return 0 ;
   }
   else if ( numkeys == 1 )
   {
      return 1 ;
   }
   /*if ( numkeys <= 1 )
   {
      return 1 ;
   }*/
   else
   {
      int root = 0 , left_trees = 0 , right_trees = 0 , sum = 0 ;
      for ( root = 1 ; root <= numkeys ; root++ )
      {
         left_trees = counttrees ( root - 1 ) ;
         right_trees = counttrees ( numkeys - root ) ;
         if (( left_trees == 0 )&&( right_trees == 0 ))
         {
            sum = sum + (left_trees * right_trees) + 1;
         }
         else if (( left_trees == 0 ))
         {
            sum = sum + (1 * right_trees); 
         }
         else if (( right_trees == 0 ))
         {
            sum = sum + (left_trees * 1); 
         }
         else
         {
            sum = sum + (left_trees * right_trees) ;
         }
      }
      return sum ;
   }
}
