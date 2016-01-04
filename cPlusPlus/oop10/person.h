#include "name.h"
#include "height.h"
using namespace std ;
class person
{
    public:
        person() ;
        person(name namevalue, height heightvalue);
        name m_name ;
        height m_height ;
	name& Getname() ;
	void changename(const string& vorname, const string& familiename);
	void printname() ;
    private:
 
};
