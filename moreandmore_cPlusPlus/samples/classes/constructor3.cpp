#include<iostream>
using namespace std;
class Simple
{
private:
    int m_nID;
 
public:
    Simple()
    {}
    Simple(int nID)
    {
        SetID(nID);
    }
 
    void SetID(int nID) { m_nID = nID; }
    int GetID() { return m_nID; }
};

int main()
{
    Simple cSimple;
    //cSimple.SetID(2);
    std::cout << cSimple.GetID() << std::endl;
}
