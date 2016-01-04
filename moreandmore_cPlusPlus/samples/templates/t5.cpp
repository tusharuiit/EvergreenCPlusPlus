#include<iostream>
using namespace std;

template <class T>
T Average(T *atArray, int nNumValues)
{
    T tSum = 0;
    for (int nCount=0; nCount < nNumValues; nCount++)
        tSum += atArray[nCount];
 
    tSum /= nNumValues;
    return tSum;
}

class Cents
{
private:
    int m_nCents;
public:
    Cents(int nCents)
        : m_nCents(nCents)
    {
    }
 
    friend ostream& operator<< (ostream &out, const Cents &cCents)
    {
        out << cCents.m_nCents << " cents ";
        return out;
    }
 
    void operator+=(Cents cCents)
    {
        m_nCents += cCents.m_nCents;
    }
 
    void operator/=(int nValue)
    {
        m_nCents /= nValue;
    }
};

int main ()
{
  Cents cArray[] = { Cents(5), Cents(10), Cents(15), Cents(14) };
  cout << Average(cArray, 4) << endl;
}
