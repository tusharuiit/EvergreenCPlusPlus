#include<iostream>
#include<string>
using namespace std;

class girlfriend
{
	public :
		string m_name ;
		int m_weight ;
	//	girlfriend(){}
		girlfriend(const string& namevalue, int weightvalue)
		{
			m_name = namevalue ;
			m_weight = weightvalue ;
		}
};
