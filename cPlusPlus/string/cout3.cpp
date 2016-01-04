#include<iostream>
#include<string>
#include <sstream>  
using namespace std;

int main()
{
	stringstream os;
	os << "12345 67.899999  hello"; // insert a string of numbers into the stream
	 
	string strValue;
	os >> strValue;
	 
	string strValue2;
	os >> strValue2;
	 
	// print the numbers separated by a dash
	cout << strValue << " - " << strValue2 << endl;
}
