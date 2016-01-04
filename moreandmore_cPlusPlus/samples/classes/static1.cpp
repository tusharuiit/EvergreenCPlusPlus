#include <iostream>
using namespace std;
class IDGenerator
{
private:
    static int s_nNextID;
    int a ; 
 
public:
     static int GetNextID() {  return (s_nNextID++); }
     int getit(){return a;}
     void setit(){a = 22;}
};
 
// We'll start generating IDs at 1
int IDGenerator::s_nNextID = 1;
 
int main()
{
    for (int i=0; i < 5; i++)
        cout << "The next ID is: " << IDGenerator::GetNextID() << endl;
 
    
    IDGenerator obj1;
    obj1.setit();
    obj1.GetNextID();
    cout<<obj1.getit()<<endl;
    
}
