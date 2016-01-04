#include<iostream>
using namespace std;
struct node
{
     int value;node* left;node* right;
};
node* insert(node* np ,int n);
void display(node* np,int c);
node* find(node* np,int k);
void deletenode(node* &np,int k);
node* findinordersuccessor(node* np,int k);
int main()
{
     node* root = NULL;char ch;
     node* keynode;int key;
     int arr[31]={1000,500,2000,250,750,1500,3000,125,375,625,875,1250,1750,2500,4000,64,200,300,450,550,700,825,
     950,1100,1400,1600,1850,2250,2750,3500,5000};
     for (int i=0;i<=30;i++)
     {
         //cout<<"enter the value you want to insert "<<endl;
         key=arr[i];
         root=insert(root , key);
         //cout<<"do u want to enter any more? y/n "<<endl;cin>>ch;         
     }
     display (root,0);
     ch = 'y';
     while (ch == 'y')
     {
         cout<<"so now the tree has been created . enter the value of the key you want to search "<<endl;
         cin>>key;
         keynode=find(root,key);
         if(keynode != NULL)
         {
             cout<<" value of node's key "<<keynode->value<<endl;
         }
         cout<<"do u want to search any more? y/n "<<endl;cin>>ch;
     }
     
     //to find inorder successor,u can also delete with in order predecessor     
     ch = 'y';
     while (ch == 'y')
     {
         cout<<"Enter the value of the key whose inorder SUCCESSOR you wish to find "<<endl;
         cin>>key;
         keynode=findinordersuccessor(root,key);
         if(keynode != NULL)
         {
             cout<<"the inorder successor of "<<key<<"is "<<keynode->value;     
         }
         
         cout<<"do u want to search any more? y/n "<<endl;cin>>ch;
     } 
     
     /*ch = 'y';
     while (ch == 'y')
     {
         cout<<"Enter the value of the key whose PARENT you wish to find "<<endl;
         cin>>key;
         keynode=findparent(root,key);
         cout<<"the inorder successor of "<<key<<"is "<<keynode->value;        
         cout<<"do u want to search any more? y/n "<<endl;cin>>ch;
     }*/    
     ch = 'y';
     while (ch == 'y')
     {
         cout<<"what do you want to delete ? "<<endl;
         cin>>key;
         deletenode(root,key);
         cout<<"new tree is as follows"<<endl;
         display(root,0);
         cout<<"do u want to delete any more? y/n "<<endl;cin>>ch;
     }
}
void deletenode(node* &np,int k)
{
    if(np == NULL)
    {
        cout<<"key not found "<<endl; 
    }
    
    if(k<np->value)
    {
         deletenode(np->left,k);
    }
    else if (k>np->value)
    {
         deletenode(np->right,k);
    }
    else 
    {
         if(np->left == NULL)
         {
             node* temp = np->right;
             delete np; 
             np=temp; 
         }
         else if(np->right == NULL)
         {
             node* temp = np->left;
             delete np; 
             np=temp; 
         }
    }
}
/*node* findparent(node* np,int k)
{
     if (np == NULL)
     {
         cout<<"key not found"<<endl;return NULL;
     }
     else 
     {
         if ((np->right != NULL)&&(k==np->right->value))
         {
             cout<<"key has been found"<<endl;return np;
         }
         if ((np->left != NULL)&&(k==np->left->value))
         {
             cout<<"key has been found"<<endl;return np;
         }
         if(k<np->value)
         {
             np=find(np->left,k);return np;
         }
         else
         {
             np=find(np->right,k);return np;
         }
     }
}*/


node* findinordersuccessor(node* np,int k)
{
    node* ptr;node* ptr2;
    ptr=find(np,k);
    if (ptr->right == NULL)
    {
        cout<<"no right child,hence no inorder successor "<<endl;
        return NULL;
    }
    else
    {
        ptr2=ptr->right;
    }
    while(ptr2->left != NULL)
    {
         ptr2=ptr2->left;
    }
    return ptr2;
}

node* find(node* np,int k)
{
     if (np == NULL)
     {
         cout<<"key not found"<<endl;return NULL;
     }
     else 
     {
         if(k==np->value)
         {
             cout<<"key has been found"<<endl;return np;
         }
         if(k<np->value)
         {
             np=find(np->left,k);return np;
         }
         else
         {
             np=find(np->right,k);return np;
         }
     }
}
void display(node* np,int c)
{
     if (np==NULL)
     {
          return;
     }
     else
     {
          cout<<"node height "<<c<<"has value "<<np->value<<endl;
          display(np->left,c+1);display(np->right,c+1);
     } 
}
node* insert(node* np ,int n)
{
     if(np == NULL)
     {
         node* ptr=new node;
         np=ptr;np->value=n;np->left=NULL;np->right=NULL;return np;
     }
     else
     {
         if(n<np->value)
         {
             np->left=insert(np->left,n);return np;
         }
         else if (n>np->value)
         {
             np->right=insert(np->right,n);return np;
         }
     }
}
