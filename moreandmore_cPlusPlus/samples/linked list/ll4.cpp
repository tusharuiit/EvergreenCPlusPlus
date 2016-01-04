// thsi just creates a linked list 
#include<iostream>
using namespace std ;
struct node
{
   int value ;
   node * arrow ;
   node();
};
node :: node() : arrow(NULL) 
   {
      //value = 0;
      //arrow = NULL ;
   }
int main()
{
   int  n;
   cout << "enter the number of nodes " << endl ; 
   cin >> n ;
   node* list = new node[n] ;
   for (int i = 0 ; i<=n ; i++)
   {
     list[i].value = i*i;
     list[i].arrow = &list[i+1];     
   }
   for (int i = 0 ; i<=n ; i++)
   {
     cout << "list["<<i<<"].value = " <<list[i].value<< endl;
   } 
   delete[] list;
}
