#include<iostream>
struct node {
int info;
node *next;
}*start;
int main()
{
   std::cout<<start<<std::endl;
   std::cout<<start->next<<std::endl;
   bool a;
   a=(0==NULL);
   std::cout<<a<<std::endl;
   std::cout<<start->info<<std::endl;
   a=(start==NULL);
   std::cout<<a<<std::endl;
   int *p;bool b;
   
   //std::cout<<p<<std::endl;
   //b=(p!=NULL);
   //std::cout<<b<<std::endl;
}
