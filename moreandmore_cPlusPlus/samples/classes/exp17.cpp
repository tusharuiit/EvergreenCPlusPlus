#include <iostream>
using namespace std;
class Simple
{
private:
    int m; 
public:
    int n;
protected:
    int p;    
};
class Simple1:public Simple
{
private:
    int a; 
public:
    int b;
protected:
    int c;    
};
int main ()
{
    Simple1 obj1;
    cout << obj1.p<<endl;
}
