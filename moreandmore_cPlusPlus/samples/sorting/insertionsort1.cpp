#include<iostream>
using namespace std;

int main()
{
    int array[10];int k;int temp;
    for (int i =0;i<=9;i++)
    {
         cout<<"\n next ?\t";cin>>array[i];
    }  
     
    for (int i=2;i<=9;i++)
    {
         k=array[i];
         for (int j=i-1;j>=0;j--)
         {
              if(k<array[j])
              {
                  array[j+1]=array[j];array[j]=k;
              }
              else
              {
                  array[j+1]=k;break;
              }
         }
    }
    for (int i =0;i<=9;i++)
    {
         cout<<"\n "<<array[i];
    }
}
