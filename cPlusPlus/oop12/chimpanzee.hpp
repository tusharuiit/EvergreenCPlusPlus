#include"mammal.hpp"

class chimpanzee : public mammal
{
	public :
		bool isinzoo ;
		chimpanzee(bool isinzoovalue = 1):isinzoo(isinzoovalue)
		{}
};
