#include<iostream>
using namespace std;
class Point
{
    private:
    int a[2] ; 
    public:
    Point( int c , int b)
    {
      a[0] = c;a[1] = b;
    }
    int& operator[](int index)
    {
       return a[index]; 
    }
    friend ostream& operator<< (ostream& out , const Point & A)
    {
       out<<"a[0]=  "<<A.a[0]<<"a[1]= "<<A.a[1]<< endl; 
    }
};
int main()
{
    Point A(45 , 47) ;
    A[0] = 49 ;
    cout << "A is : " << A << endl ; 
}
