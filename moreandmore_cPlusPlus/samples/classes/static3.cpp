#include <iostream>
using namespace std;
class IDGenerator
{
private:
    static int s_nNextID;
 
public:
     static int GetNextID() { return s_nNextID++; }
    static void set() { s_nNextID++; } 
};
 
// We'll start generating IDs at 1
int IDGenerator::s_nNextID = 1;
IDGenerator::set(); 
int main()
{
    for (int i=0; i < 5; i++)
        cout << "The next ID is: " << IDGenerator::GetNextID() << endl;
        
    IDGenerator obj1;
    for (int i=0; i < 5; i++)
        cout << "The next ID is: " << obj1.GetNextID() << endl;
 
}
