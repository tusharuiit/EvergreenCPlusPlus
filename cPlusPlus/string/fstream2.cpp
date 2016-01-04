#include <fstream>
#include <iostream>
 #include <cstdlib>  
using namespace std;
int main()
{
	ifstream inf("Sample.dat");
	inf.seekg(0, ios::end); // move to end of file
	cout << inf.tellg();
}
