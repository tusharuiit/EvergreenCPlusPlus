#include <iostream>
using namespace std;
class Base
{
public:
    int m_nPublic;
private:
    int m_nPrivate;
protected:
    int m_nProtected;
};
 
class Pri: protected Base
{
    // Private inheritance means:
    // m_nPublic becomes private
    // m_nPrivate stays private
    // m_nProtected becomes private
 
    public:
    Pri()
    {
        // The derived class always uses the immediate parent's class access specifications
        // Thus, Pub uses Base's access specifiers
        m_nPublic = 1; // okay: anybody can access public members
        //m_nPrivate = 2; // not okay: derived classes can't access private members in the base class!
        //m_nProtected = 3; // okay: derived classes can access protected members
    }
};

class Pri1: public Pri
{
    // Private inheritance means:
    // m_nPublic becomes private
    // m_nPrivate stays private
    // m_nProtected becomes private
 
    Pri1()
    {
        // The derived class always uses the immediate parent's class access specifications
        // Thus, Pub uses Base's access specifiers
        m_nPublic = 1; // okay: anybody can access public members
        //m_nPrivate = 2; // not okay: derived classes can't access private members in the base class!
        //m_nProtected = 3; // okay: derived classes can access protected members
    }
};
 
int main()
{
    
}
