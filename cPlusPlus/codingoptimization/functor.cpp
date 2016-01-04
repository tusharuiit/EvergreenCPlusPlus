#include <iostream>
 
class myFunctorClass
{
    public:
        myFunctorClass (int x) : _x( x ) {}
        int operator() (int y) { return _x + y; }
    private:
        int _x;
};
 
int main()
{
    myFunctorClass addFive( 5 );
    std::cout << addFive( 6 ) << std::endl ;
 
    return 0;
}
