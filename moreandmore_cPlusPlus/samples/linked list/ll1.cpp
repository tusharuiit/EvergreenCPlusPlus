#include<iostream>
using namespace std;
struct node {int value;node *next;}*start,*ptr,*temp,*temp1;
int main()
{
   
   for(int i = 1;i<=5;i++)
   {
       int input;cout<<"\nenter the value\t";cin>>input;
       //cout<<ptr<<endl;
       ptr=new node;
       ptr->value=input;
       //cout<<ptr->value<<endl;
       //cout<<ptr<<endl;
       if(start == NULL)
       {
           start=ptr;
           ptr->next=NULL;
           //or start->next=NULL;
       }
       else
       {
           temp=start;
           start=ptr;
           ptr->next=temp;
       }
       //delete ptr;
   }
   temp1=start;
   while(temp1 != NULL)
   {
     cout<<temp1->value<<endl;
     temp1=temp1->next;  
   }
   //cout<<start->value<<endl;
   //cout<<start->next->value<<endl;
   //cout<<start->next->next->value<<endl;
   //cout<<start->next->next->next->value<<endl;
   //cout<<start->next->next->next->next->value<<endl;
   
}
