#include<iostream>
using namespace std;

class Point
{
    public:
    int _a ;
    
    ostream& operator<< ( ostream & out)
    {
       out << m_dX << m_dY<< m_dZ << endl ;
       return out;
    }
};

int main()
{
    
}
