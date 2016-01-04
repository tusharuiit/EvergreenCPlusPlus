#include<iostream>

class Animal
{
	public :
		virtual void printvirtual()
		{
			std::cout << " Animal says ????? " << std::endl ;
		}
		void printnormal()
		{
			std::cout << " Animal says ????? " << std::endl ;
		}
};

class Cat : public Animal
{
	public :
		virtual void printvirtual()
		{
			std::cout << " Cat says Meow " << std::endl ;
		}
		void printnormal()
		{
			std::cout << " Cat says Meow " << std::endl ;
		}
};

void testfunction(Animal * a)
{
	a->printvirtual();
}

int main()
{
	Animal a1 ;
	Cat c1 ;

	a1.printvirtual() ;
	a1.printnormal() ;

	c1.printvirtual() ;
	c1.printnormal() ;

	Animal * a2 = & c1 ;
	Animal & a3 = c1 ;

	a2->printvirtual();
	a2->printnormal() ;

	a3.printvirtual();
	a3.printnormal() ;

	testfunction(a2);	
}
