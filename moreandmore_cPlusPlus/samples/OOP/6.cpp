#include <iostream>
using namespace std;

class Something
{
public:
    static int m1;
    //int m2;
   
};
int main ()
{
   cout << sizeof (Something) << endl;
   Something s1;
   cout << sizeof (s1) << endl;
}
