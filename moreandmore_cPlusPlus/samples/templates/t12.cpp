#include<iostream>
#include<string.h>
using namespace std ;

template <typename T, typename T2>
class Storage
{
private:
    T m_tValue;
    T2 b;
public:
    Storage(T tValue , T2 b1)
    {
         m_tValue = tValue;
         b = b1;
    } 
    ~Storage()
    {
    }
    void Print()
    {
        cout << m_tValue  << endl;
        cout << b  << endl;
    }    
};
template <typename T2>
Storage<char*>::Storage(char* tValue,T2 b1)
{
    // Allocate memory to hold the tValue string
    m_tValue = new char[strlen(tValue)+1];
    // Copy the actual tValue string into the m_tValue memory we just allocated
    strcpy(m_tValue, tValue);
    b=b1;
}
template <typename T2>
Storage<char* >::~Storage()
{
    delete[] m_tValue;
}
int main()
{ 
    // Dynamically allocate a temporary string
    char *strString = new char[40];
    int b = 5 ; 
    // Ask user for their name
    cout << "Enter your name: ";
    cin >> strString;
 
    // Store the name
    Storage<char*,int> strValue(strString , b);
 
    // Delete the temporary string
    delete strString;
 
    // Print out our value
    strValue.Print(); // This will print garbage
}
