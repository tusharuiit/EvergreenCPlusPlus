#include<iostream>

int main()
{
    for ( int i =0; i <1; i++) 
    {
        int a=5;
        int *p = &a ;
        std::cout<<"*p is "<<*p<<"      "<<std::endl;
    }
    std::cout<<"*p is "<<*p<<"      "<<std::endl;
}
