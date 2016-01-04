#include<iostream>
using namespace std;
class Something
{
public:
    static int s_nValue;
};
 
int Something::s_nValue = 1;
//int Something::s_nValue;
 
int main()
{
    //Something::s_nValue = 2;
    std::cout << Something::s_nValue;
    return 0;
}

