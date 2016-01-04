#include<iostream>
#include<string>
using namespace std ;

class livingbeing
{
	public :
		int lifespan ;
		livingbeing(int lifespanvalue = 100) : lifespan(lifespanvalue) 
		{
			std::cout << "in livingbeing level 1 constructor where :" << std::endl << "lifespan = " << lifespan << std::endl;
		}
};

class animal : public livingbeing
{
	public :
		int numberoflegs ;
		animal(int lifespanvalue, int numberoflegsvalue) : livingbeing(lifespan), numberoflegs(numberoflegsvalue)
		{
			std::cout << "In animal level 2 constructor where :" << std::endl << "number of legs = " << numberoflegs  << std::endl;
		}
};

class dog : public animal
{
	public :
		std::string sound ;
		dog(std::string soundvalue, int lifespanvalue, int numberoflegsvalue) : animal(lifespanvalue, numberoflegsvalue), sound(soundvalue)
		{
			std::cout << "In dog level 3 constructor where :" << std::endl << " sound = " << sound  << std::endl;
		}
};

class germanshephard : public dog
{
	public :
		bool furry ;
		germanshephard(bool furryvalue, std::string soundvalue, int lifespanvalue, int numberoflegsvalue) : dog(soundvalue, lifespanvalue, numberoflegsvalue), furry(furryvalue)
		{
			std::cout << " In germanshephard level 4 constructor where :" << std::endl << "furry = " << furry  << std::endl;
		}
};

int main()
{
	livingbeing l1 (50);
	std::cout << std::endl ;
	animal a1 (30, 10) ;
	std::cout << std::endl ;
	dog d1 ("bhoww", 55, 4);
	std::cout << std::endl ;
	germanshephard g1 (1, "bhow", 32, 8);
	std::cout << std::endl ;
}
