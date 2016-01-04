#include <iostream>
using namespace std ;
class Access
{
   int m_nA; // private by default
   int GetA() { return m_nA; } // private by default
 
private:
   int m_nB; // private
   int GetB() { return m_nD; } // private
 
protected:
   int m_nC; // protected
   int GetC() { return m_nC; } // protected
 
public:
   int m_nD; // public
   int GetD() { return m_nD; } // public
   int gete() {m_nB = 777;return GetB();}
};
 
int main()
{
    Access cAccess;
    cAccess.m_nD = 5; // okay because m_nD is public
    std::cout << cAccess.GetD()<<endl; // okay because GetD() is public
    cout <<" i l u "<<endl;
    cout << cAccess.gete()<<endl;
    return 0;
}
