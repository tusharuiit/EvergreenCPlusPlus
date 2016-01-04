#include<string>
#include<iostream>
using namespace std ;
class name
{
    public:
	name();
	name(std::string vornamevalue, std::string familienamevalue);
        std::string m_vorname ;
        std::string m_familiename ;
	friend ostream& operator<<(ostream& hello, const name& other)
	{
		hello << other.m_vorname << std::endl;
		hello << other.m_familiename << std::endl ;
		return hello ;
	}
	void change(const string& vorname, const string& familiename);
    private:

};
