#include "name.h"


using namespace std ;
name::name()
{

}

name::name(string  vornamevalue , string  familienamevalue):m_vorname(vornamevalue), m_familiename(familienamevalue)
{

}

void name::change(const string& vorname, const string& familiename)
{
	m_vorname = vorname ;
        m_familiename = familiename ;
}
