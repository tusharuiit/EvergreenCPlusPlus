#include<iostream>

class A
{
	public :
		A()
		{
			std::cout << "creating A " << std::endl ;
		}
};

class B : public A
{
	public :
		B()
		{
			std::cout << "creating B " << std::endl ;
		}
};

class C : public B
{
	public :
		C()
		{
			std::cout << "creating C " << std::endl ;
		}
};

class D : public C
{
	public :
		D()
		{
			std::cout << "creating D " << std::endl ;
		}
};

int main()
{
	A a1 ;
	B b1 ;
	C c1 ;
	D d1 ;
}
