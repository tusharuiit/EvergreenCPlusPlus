#include<iostream>
using namespace std;
int GenerateID()
{
    static int s_nID = 0;
    s_nID++;
    return s_nID;
}
 
int main()
{
    std::cout << GenerateID() << std::endl;
    std::cout << GenerateID() << std::endl;
    std::cout << GenerateID() << std::endl;
    return 0;
}
