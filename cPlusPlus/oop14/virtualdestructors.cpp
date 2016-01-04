#include<iostream>

class A
{
	public :
		virtual ~A()
		{std::cout << "In the destructor of A" << std::endl ;}
};

class B : public A
{
	public :
		int * dyn_var ;
		B()
		{
			dyn_var = new int[5] ;
		}

		virtual ~B()
		{std::cout << "In the destructor of B" << std::endl ; delete[] dyn_var;}
};

void dosome(A * a1)
{
	delete a1 ;
}

int main()
{
//	A a1 ;
//	B b1 ;

//	B b2 ;

	B * b3 = new B ;

//	delete b3 ;

	A * a2 = b3 ;

//	delete a2 ;

	dosome(a2) ;

//	A * a2 = & b2 ;
//	delete a2 ;
}
