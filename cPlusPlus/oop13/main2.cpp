#include<iostream>

class Base
{
	public :
		int m_basevalue ;
		void Print()
		{ std::cout << " Base " << std::endl ;}
		Base(){m_basevalue = 10 ;}
	private :
};

class Derived : public Base
{
	public :
		int m_derivedvalue ;
		void Print()
		{
			Base::Print();
			std::cout << "Derived" << std::endl ;
		}
	private :
		using Base::m_basevalue;
};

int main()
{
	Base b1 ;
	std::cout << b1.m_basevalue << std::endl ;
	b1.Print();
	Derived d1 ;	
	d1.Print();
	std::cout << d1.m_basevalue << std::endl ;
}
