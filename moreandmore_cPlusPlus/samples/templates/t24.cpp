#include<iostream>
#include<cstring>
using namespace std ; 
template <typename T>
class Storage
{
    private:
    T m_tValue;
    public:
    Storage(T tValue)
    {
         m_tValue = tValue;
    } 
    ~Storage()
    {
    } 
    void Print()
    {
        std::cout << m_tValue << std::endl;;
    }
};
template<>
Storage<char*>::Storage(char* tValue)
{
    // Allocate memory to hold the tValue string
    m_tValue = new char[strlen(tValue)+1];
    // Copy the actual tValue string into the m_tValue memory we just allocated
    strcpy(m_tValue, tValue);
}
int main()
{
    using namespace std;
 
    // Dynamically allocate a temporary string
    char *strString = new char[40];
 
    // Ask user for their name
    cout << "Enter your name: ";
    cin >> strString;
 
    // Store the name
    Storage<char*> strValue(strString);
 
    // Delete the temporary string
    delete strString;
 
    // Print out our value
    strValue.Print(); // This will print garbage
}
