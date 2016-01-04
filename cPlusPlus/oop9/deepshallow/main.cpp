#include<iostream>
#include"deepshallow.h"
int main()
{
    using namespace std ;

    deepshallow a1(3,6) ;
    a1.print();


    deepshallow a2 = a1;
    a2.print();

{
    deepshallow a3(3,6) ;
    a3.print();
    a3 = a1 ;
    a3.print();
}//        a1.print();
//        a2.print();


//    a1.print();
}
