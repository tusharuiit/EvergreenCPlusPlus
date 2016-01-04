#include <iostream>
#include <map>
#include <string>
int main()
{
    using namespace std;
 
    map<string, int> mymap;
    mymap.insert(make_pair( "apple" , 4));
    mymap.insert(make_pair("orange" , 2));
    mymap.insert(make_pair("banana" , 5));
 
    map<string, int>::const_iterator it; // declare an iterator
    it = mymap.begin(); // assign it to the start of the vector
    while (it != mymap.end()) // while it hasn't reach the end
    {
        cout << it->first << "=" << it->second << " "; // print the value of the element it points to
        it++; // and iterate to the next element
    }

 
    cout << endl;


       cout << mymap["orange"] << endl  ;

    cout << endl;
}
