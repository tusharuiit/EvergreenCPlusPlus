#include<iostream>
using namespace std;

class Point
{
private:
    double m_dX, m_dY, m_dZ;
    
public:
    Point(double dX=0.0, double dY=0.0, double dZ=0.0)
    {
      m_dX = dX;
      m_dY = dY;
      m_dZ = dZ;
    }
    
    
    ostream& operator<< ( ostream & out)
    {
       out << m_dX << m_dY<< m_dZ << endl ;
       return out;
    }
 
    double GetX() { return m_dX; }
    double GetY() { return m_dY; }
    double GetZ() { return m_dZ; }
};

int main()
{
   Point * cPoint = new Point(5.0, 6.0, 7.0) ;
   (*cPoint) << cout << "i love you " << endl ; 
}
