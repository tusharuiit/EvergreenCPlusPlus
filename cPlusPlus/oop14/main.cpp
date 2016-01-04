#include<iostream>

class A
{
	public :
		void print(){std::cout << "A" << std::endl ;}
};

class B : public A
{
	public :
		void print(){std::cout << "B" << std::endl ;}
};

class C : public B
{
	public :
		void print(){std::cout << "C" << std::endl ;}
};

class D : public C
{
	public :
		void print(){std::cout << "D" << std::endl ;}
};

int main()
{
	A a;
	a.print();
	B b;
	b.print();
	C c;
	c.print();
	D d;
	d.print();

	A *a2 = &a;
	a2->print();
	A & a3 = a ;
	a3.print();

	std::cout << std::endl ;
	std::cout << "Now taking care of B" << std::endl ;

	A * a4 = & b ;
	A & a5 = b ;
	B * b1 = & b ;
	B & b2 = b ;
	a4->print();
	a5.print();
	b1->print() ;
	b2.print() ;

	std::cout << std::endl ;
	std::cout << "Now B taking care of D" << std::endl ;

	B * b3 = &d ;
	B & b4 = d ;
	b3->print() ;
	b4.print() ;
}
