#include<iostream>
using namespace std;
class Date
{
private:
    int m_nMonth;
    int m_nDay;
    int m_nYear;
 
    Date() { } // private default constructor
 
public:
    Date(int nMonth, int nDay, int nYear)
    {
        SetDate(nMonth, nDay, nYear);
    }
 
    void SetDate(int nMonth, int nDay, int nYear)
    {
        m_nMonth = nMonth;
        m_nDay = nDay;
        m_nYear = nYear;
    }
 
    int GetMonth() const { return m_nMonth; }
    int GetDay() const { return m_nDay; }
    int GetYear() const { return m_nYear; }
};

void PrintDate(Date &cDate)
{
    // although cDate is const, we can call const member functions
    std::cout << cDate.GetMonth() << "/" <<
        cDate.GetDay() << "/" <<
        cDate.GetYear() << std::endl;
}
 
int main()
{
    Date cDate1(10, 16, 2020);
    PrintDate(cDate1);
 
    return 0;
}


