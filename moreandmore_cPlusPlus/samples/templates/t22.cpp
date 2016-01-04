#include<iostream>
#include<cstring>
using namespace std ;

template <typename T, int nSize , int a , float b> // nSize is the expression parameter
class Buffer
{
private:
    // The expression parameter controls the size of the array
    T m_atBuffer[nSize];
    T aa[a];
public:
    T* GetBuffer() { return m_atBuffer; }
 
    T& operator[](int nIndex)
    {
        return m_atBuffer[nIndex];
    }
};
 
int main()
{
    // declare an integer buffer with room for 12 chars
    Buffer<int, 12 , 13 , 14.5> cIntBuffer;
 
    // Fill it up in order, then print it backwards
    for (int nCount=0; nCount < 12; nCount++)
        cIntBuffer[nCount] = nCount;
 
    for (int nCount=11; nCount >= 0; nCount--)
        std::cout << cIntBuffer[nCount] << " ";
    std::cout << std::endl;
 
    // declare a char buffer with room for 31 chars
    Buffer<char, 31 , 33, 34.5> cCharBuffer;
 
    // strcpy a string into the buffer and print it
    strcpy(cCharBuffer.GetBuffer(), "Hello there!");
    std::cout << cCharBuffer.GetBuffer() << std::endl;
 
    return 0;
}
