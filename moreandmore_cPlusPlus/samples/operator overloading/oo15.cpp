#include<iostream>
using namespace std;
class Point
{
    private:
    const int _x ;
    int _y ; 
    public:
    Point( int a , int b):_x(a),_y(b){}
    Point& operator++()
    {
       ++_y;
       return *this ; 
    }
    Point& operator++(int c)
    {
       Point C(_x,_y) ;
       ++(*this) ;       
       return C ; 
    }
    friend ostream& operator<< (ostream& out , const Point & A)
    {
       out<<"_x= "<<A._x<<"_y= "<<A._y<< endl; 
    }
};
int main()
{
    Point A(4 , 7) ;
    cout << "A is : " << A << endl ;
    ++(++A) ;
    cout << "A is : " << A << endl ;
    Point B(40 , 70) ;
    cout << "B is : " << B << endl ;
    Point C = (B++)++ ;
    cout << "B is : " << B << endl ;
    cout << "C is : " << C << endl ;
}
