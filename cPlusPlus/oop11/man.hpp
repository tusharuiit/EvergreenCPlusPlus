#include<string>
#include"girlfriend.hpp"
using namespace std ;

class man
{
	public :
		string m_name ;
		girlfriend * m_gf1 ;
		man(const string& namevalue, girlfriend * gf = NULL)
		{
			m_name = namevalue ;
			m_gf1 = gf ;
		}
};
