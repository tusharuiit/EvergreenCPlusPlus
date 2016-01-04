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
       ptr->next=NULL;
       //cout<<ptr->value<<endl;
       //cout<<ptr<<endl;
       if(start == NULL)
       {
           start=ptr;
           //cout<<start->value<<"sexy"<<endl;
           //ptr->next=NULL;//or start->next=NULL;
       }
       else
       {
           temp1=start;
           while(temp1 != NULL)
           {
               //cout<<temp1->value<<endl;
               temp = temp1;
               temp1=temp1->next;  
               //cout<<temp1<<endl;
           }  
           //bool b;
           //b=(start->next==temp1);cout<<"b1 is \t"<<b<<endl;
           temp->next=ptr;
           //cout<<temp1<<"\n temp 1"<<endl;
           //cout<<start->next<<"\n not sexy"<<endl;               
               
       }
       //delete ptr;
   }
   //cout<<"\n pal sexy1"<<start->value<<endl;
   //cout<<"\n pal sexy"<<start->next<<endl;
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
