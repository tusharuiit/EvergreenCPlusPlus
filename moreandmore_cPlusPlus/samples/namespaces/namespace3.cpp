//#include "foo.h"
#include "goo.h"
#include <iostream>
 
int main()
{
    using namespace std;
    using namespace Goo;
    cout << DoSomething(4, 3) << endl; // which DoSomething will we get?
    return 0;
}
