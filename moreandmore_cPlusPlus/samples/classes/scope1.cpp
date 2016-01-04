#include <iostream>
using namespace std;

class IDGenerator
{
private:
    static int s_nNextID;
 
public:
     static int GetNextID() {  s_nNextID++; }
};
 
// We'll start generating IDs at 1
int IDGenerator::s_nNextID = 1;
//IDGenerator::GetNextID();
 
int main()
{
    for (int i=0; i < 5; i++)
        cout << "The next ID is: " << IDGenerator::GetNextID() << endl;
 
    return 0;
}
