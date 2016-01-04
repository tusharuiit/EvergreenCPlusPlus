#include<iostream>
#include<cstring>
using namespace std;

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
        cout << "i love u 1 " << endl;
        cout << m_tValue << endl;
    }
};
template <typename T>
class Storage<T*> // this is specialization of Storage that works with pointer types
{
private:
    T* m_tValue;
public:
    Storage(T* tValue) // for pointer type T
    {
         m_tValue = new T(*tValue);
    } 
    ~Storage()
    {
        delete m_tValue;
    } 
    void Print()
    {
        cout << "i love u 2 " << endl;
        cout << *m_tValue << endl;
    }
};
int main()
{
    // Declare a non-pointer Storage to show it works
    Storage<int> cIntStorage(5);
    cIntStorage.Print();
    // Declare a pointer Storage to show it works
    int x = 7;
    Storage<int*> cIntPtrStorage(&x); 
    cout << "i l u 3 " << endl ; 
    Storage<int> cIntStorage1(x);
    cIntStorage1.Print();
    cout << "i l u 4 " << endl ; 
    // If cIntPtrStorage did a pointer assignment on x,
    // then changing x will change cIntPtrStorage too
    x = 9;
    cIntPtrStorage.Print();
    char ch[4] ="hel";  
    Storage<char*> ch1(ch);
    ch1.Print() ;    
}
