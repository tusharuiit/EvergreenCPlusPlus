#include<iostream>
using namespace std;
class Date

{
private:
    int m_nMonth;
    int m_nDay;
    int m_nYear;
 
public:
    int getmonth()
    {
       return m_nMonth;
    }
    Date(int nMonth=12, int nDay=2, int nYear=1970)
    {
        m_nMonth = nMonth;
        m_nDay = nDay;
        m_nYear = nYear;
    }
};
 
int main()
{
    Date cDate; // cDate is initialized to Jan 1st, 1970 instead of garbage
    cout<<cDate.getmonth()<<endl;
    Date cToday(9, 5, 2007); // cToday is initialized to Sept 5th, 2007
 
    return 0;
}
