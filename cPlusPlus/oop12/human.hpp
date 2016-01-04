#include"mammal.hpp"

class human : public mammal
{
	public :
		bool isathome ;
		human(bool isathomevalue = 1):isathome(isathomevalue)
		{}
};
