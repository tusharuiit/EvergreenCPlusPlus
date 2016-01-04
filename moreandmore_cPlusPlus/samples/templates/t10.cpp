#include<iostream>
using namespace std ;
template <typename T>
class Storage
{
private:
    T m_tValue;
public:
    Storage(T tValue)
    {
         m_tValue = tValue;
    } 
    ~Storage()
    {
    }
    void Print()
    {
        cout << m_tValue << endl;
    }    
};
template <>
void Storage<double>::Print()
{
    cout  << scientific << m_tValue << endl;
}
int main()
{
    // Define some storage units
    //Storage<int> nValue(5);
    //Storage<double> dValue(6.7);
    //Storage<int> nValue(5);
    Storage<double> dValue(6.7);
    // Print out some values
    //nValue.Print();
    dValue.Print();
}
