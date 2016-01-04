#include<iostream>
#include<vector>
//#include <initializ_list>
#include <initializer_list>
using namespace std;
 
 
template <typename T>
class MyArray
{
private:
    vector<T> m_Array;
 
public:
    MyArray() { }
 
    MyArray(const std::initializer_list<T>& x): m_Array(x) // let vector constructor handle population of mArray
    {
    }
};
 
int main()
{
    MyArray<int> foo = { 3, 4, 6, 9 };
    return 0;
}
