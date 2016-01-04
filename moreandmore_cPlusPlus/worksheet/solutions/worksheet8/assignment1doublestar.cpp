#include<iostream>
using namespace std;
struct node {
                int value;node *next; 
            };
node* createnewnode(int n);
void push_front(node *np , node **start);
void push_back(node *np , node **begin);
void pop_front(node **start);
void pop_back(node **start);
void display(node *np);

int main()
{
    node * start = 0;
    char ans = 'y';int val;node *newptr;
    //Create a list
    while(ans=='y')
    {
        cout<<"Enter value for the new node "<<endl;
        cin>>val;
        newptr=createnewnode(val);
        cout<<"the new node has been created successfully  "<<endl;
        cout<<"the new node has value  "<<newptr->value<<endl;
        //cout<<"the new node has address   "<<newptr<<endl;
        //cout<<"the new node has the node field  "<<newptr->next<<endl;
        cout<<"do you now want to push at front/back of a list ? f/b/n "<<endl;
        cin>>ans;
        if (ans == 'f')
           {push_front(newptr , &start);display(start);}
        else if (ans == 'b') 
           {
              push_back(newptr , &start);display(start);
           }  
        //else if (ans)
        cout<<"do you now want to pop at front/back of a list ? f/b/n "<<endl;cin>>ans;
        if (ans == 'f')
           {pop_front(&start);display(start);}
        else if (ans == 'b') 
           {
              pop_back(&start);display(start);
           } 
        cout<<"want more - y/n ? "<<endl;cin>>ans;
        //cout<<"(*start).value "<<(*start).value<<endl;
    }
}
node* createnewnode(int n)
{
    node *ptr;
    ptr = new node;
    ptr->value = n;
    ptr->next = NULL;
    return ptr;
}
void push_front(node *np , node **start)
{
    //cout<<"np->next before = "<<np->next<<endl;
    //cout<<"*start = "<<*start<<endl;
    np->next = *start;
    //cout<<"np->next after = "<<np->next<<endl;
    *start = np;
    //cout<<"start->value = "<<start->value<<endl;
    //return start;
}
void pop_front(node **start)
{    
    *start = (*start)->next;
}
void pop_back(node **begin)
{    
    node *ptr;
    ptr=*begin;
    while(ptr->next->next != NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
}
void push_back(node *np , node **begin)
{
    node *ptr1;node *ptr2;
    ptr1=*begin;ptr2=ptr1;
    if (*begin==NULL)
    {
        cout<<"haathi "<<endl;
        *begin=np; 
        cout<<"haathi2 "<<endl;
    }
    else 
    {
        cout<<"ghoda "<<endl;
        
        while(ptr1 != NULL)
        {
           ptr2=ptr1;ptr1=ptr1->next;
        }
       ptr2->next=np;
    }   
}
void display(node *np)
{
   //cout<<"np->value = "<<np->value<<endl;
   while(np!=NULL)
   {cout<<np->value<<"-->";np=np->next;}
   //cout<<"i love u "<<endl; 
}

