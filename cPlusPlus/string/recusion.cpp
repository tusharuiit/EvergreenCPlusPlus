#include<iostream>

void CountDown(int nValue)
{
    using namespace std;
    cout << nValue << endl;
    CountDown(nValue-1);
}

int main()
{
    CountDown(10);
    return 0;
}
