#include<iostream>
using namespace std;
class Point
{
    private:
    int a[2][2] ; 
    public:
    Point( int c , int b)
    {
      a[0][0] = c;a[0][1] = b;a[1][0] = c+b;a[1][1] = c-b;
    }
    int& operator()(int m , int n)
    {
       return a[m][n]; 
    }
    friend ostream& operator<< (ostream& out , const Point & A)
    {
       for (int i=0;i<=1;i++)
       {
         for(int j=0;j<=1;j++)
         {
           out<<"a["<<i<<"]["<<j<<"]="<< A.a[i][j]<< endl;
         }
       }
    return out ;       
    }
};
int main()
{
    Point A(45 , 47) ;
    cout << "A is : " << A << endl ;
    A(0,1) = 49 ;
    cout << "A is : " << A << endl ; 
}
