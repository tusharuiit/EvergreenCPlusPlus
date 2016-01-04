#include<iostream>
using namespace std;
struct node {
                int value;node *next; 
            };
node* createnewnode(int n);
node* push_front(node *np , node *start);
void push_back(node *np , node *start);
node* pop_front(node *start);
void pop_back(node *start);
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
           {start=push_front(newptr , start);display(start);}
        else if (ans == 'b')
           { if (start==NULL)
             {start=newptr; }
             else
             {push_back(newptr , start);display(start);}
           }
        cout<<"do you now want to pop out at front/back of a list ? f/b/n "<<endl;cin>>ans;
        if (ans == 'f')
           {start=pop_front(start);display(start);}
        else if (ans == 'b')
           { 
             {pop_back( start);display(start);}
           }   
        cout<<"want more - y/n ? "<<endl;cin>>ans;
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
node* push_front(node *np , node *start)
{
    //cout<<"np->next before = "<<np->next<<endl;
    np->next = start;
    //cout<<"np->next after = "<<np->next<<endl;
    start = np;
    //cout<<"start->value = "<<start->value<<endl;
    return start;
}
void push_back(node *np , node *start)
{
       node *ptr;
       while (start != NULL)
       {ptr=start;start=start->next; }
       ptr->next=np;
    
}
node* pop_front(node *start)
{       
       start=start->next; 
       return start;
}
void pop_back(node *start)
{       
       while(start->next->next != NULL)
       {
           start=start->next;
       }
       start->next=NULL;
}
void display(node *np)
{
   //cout<<"np->value = "<<np->value<<endl;
   while(np!=NULL)
   {cout<<np->value<<"-->";np=np->next;}
   //cout<<"i love u "<<endl; 
}

