#include<iostream>
using namespace std;

int main()
{
	cout.unsetf(ios::dec); // turn off decimal output
	cout.setf(ios::hex); // turn on hexadecimal output
	cout << 34 << endl;

	cout << hex << 27 << endl; // print 27 in hex
	cout << 28 << endl; // we're still in hex
	cout << dec << 29 << endl; // back to decimal
}
