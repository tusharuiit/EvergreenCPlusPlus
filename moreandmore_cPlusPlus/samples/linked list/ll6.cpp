// thsi just creates a linked list 
#include<iostream>
using namespace std ;
struct node
{
   int value ;
   node * arrow ;
   node();
   ~node();
   //node* createnewnode();
};
node :: node() : arrow(NULL) 
   {
      //value = 0;
      //arrow = NULL ;
   }
node :: ~node() 
   {
      if (arrow != NULL)
       {delete arrow;}
   }   

node* createnewnode()
{
   node * ptr = new node; 
   return ptr;  
}
int main()
{
   int  n;
   cout << "enter the number of nodes " << endl ; 
   cin >> n ;
   node* start = new node ;
   node* temp  = start ;
   temp = start;
   for (int i = 0 ; i<=n ; i++)
   {
      temp->arrow = createnewnode();
      temp->arrow->value = i*i  ;
      temp = temp->arrow;     
   }
   temp = start ; 
   for (int i = 0 ; i<=n ; i++)
   {
     cout << " value = " << temp->arrow->value << endl;
     temp = temp->arrow;
   } 
   delete start;
   start = NULL ; temp = NULL ;
}