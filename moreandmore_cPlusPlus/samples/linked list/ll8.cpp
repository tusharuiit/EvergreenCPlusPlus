// this just creates a linked list 
#include<iostream>
using namespace std ;

struct node
{
   int val ;
   node * nextnode ;
   node();
   ~node();
   void connectatend(node * newnode );
};
node :: node()
{
  nextnode = NULL ;
}
node :: ~node()
{
  cout << "i l u " << endl ;
  if (nextnode != NULL){delete nextnode ;}
}

void node::connectatend(node * newnode )
{
    node * temp = this;
    while(temp->nextnode != NULL)
    {
       temp = temp->nextnode ;
    }
    temp->nextnode = newnode ;
    //newnode->nextnode = NULL ;
}

void printlist(node &startnode) 
{   
    node * temp = &startnode ;
    while (temp->nextnode != NULL)
    { cout<< temp->nextnode->val << endl ; temp = temp->nextnode ;   }
}

int main ()
{  
   node  start ; 
   int n = 1 ; int val ;
   while (n)
   {
       cout << " enter an integer number as value please " << endl ;
       node * newnode = new node ;
       cin >> val ;
       newnode->val = val ;
       start.connectatend(newnode) ;
       cout << "enter n as 1 if u wanna continue " << endl ;
       cin>>n ;  
   }
   printlist(start) ;     
   
}
