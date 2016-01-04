#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

//template < typename T1 >
//class class1
//{
//	public :
//		T1 a ;
//};

int main() 
{
	vector<int> data = {5, 16, 4, 7} ;

//	vector<int> index(data.size(), 0) ;
	vector < std::string > index (data.size()) ;

	index[0] = "SRK" ;
	index[1] = "Ajay" ;
	index[2] = "Aamir" ;
	index[3] = "Amitabh" ;

//	sort(index.begin(), index.end(),
//	[&](const int& a, const int& b) 
//	{
//		return (data[a] < data[b]);
//	});

	sort(index.begin(), index.end(),
	[&](const std::string & a, const std::string & b) 
	{
		return (data[a] < data[b]);
	});

//	for (int i = 0 ; i != index.size() ; i++)
//	{
//		cout << index[i] << endl;
//	}

//	return 0;
}
