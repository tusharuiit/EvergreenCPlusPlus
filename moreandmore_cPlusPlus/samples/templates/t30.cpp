#include<iostream>
#include<cstring>
using namespace std ;
template <typename T> // nSize is the expression parameter
class Buffer
{
private:
    // The expression parameter controls the side of the array
    T m_atBuffer[10];
 
public:
    T* GetBuffer() { return m_atBuffer; }
    T& operator[](int nIndex)
    {
        return m_atBuffer[nIndex];
    }
};
template <typename T>
void PrintBufferString(Buffer<T> &rcBuf)
{
   cout << rcBuf.GetBuffer()<<endl;
}
int main()
{
    // declare a char buffer
    Buffer<char> cChar10Buffer;
 
    // copy a value into the buffer
    strcpy(cChar10Buffer.GetBuffer(), "Ten");
 
    // Print the value
    PrintBufferString(cChar10Buffer);
}
