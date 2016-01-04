#include<iostream>
class a
{
    public :
        int m_v1 ;
        int *m_v2 ;
        a()
        {
            m_v1 = 5 ;
            m_v2 = new int[3];
        }
};

int main()
{
    a o1;
    std::cout << o1.m_v1 << std::endl;
    {
        a o2 = o1;
        std::cout << o2.m_v1 << std::endl;
    }
}
