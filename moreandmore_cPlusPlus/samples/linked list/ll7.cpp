// thsi just creates a linked list 
#include<iostream>
using namespace std ;

struct node
{
   int val ; 
   node * nodeptr ;
};

int main ()
{
   cout << " enter the number of elements in linked list !! " << endl ;
   int n ;cin >> n ;
   node * start = new node ;
   node * tempnode = start ;
   node * newnode ;
   for (int i = 1 ; i <= n ; i ++ )
   {
       newnode = new node ;
       newnode->val = i*i + 10;
       tempnode->nodeptr = newnode ;
       tempnode = newnode ;
   }
   tempnode->nodeptr = NULL ;
   tempnode = start->nodeptr ;
   for (int i = 1 ; i <= n ; i ++ )
   {
       cout << tempnode->val << endl ;
       tempnode = tempnode->nodeptr ;
   }
   
}
