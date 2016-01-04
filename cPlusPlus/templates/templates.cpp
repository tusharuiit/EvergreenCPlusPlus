#include<iostream>
template<typename T1, typename T2, class T3>
void somefunction(T1 t1, T2 t2, T3 t3)
{
	std::cout << t1 << std::endl ;
	std::cout << t2 << std::endl ;
	std::cout << t3 << std::endl ;
	std::cout << std::endl ;
}


int main()
{
	somefunction(4.5, 4, "Tushar") ;
	somefunction(4.5, "Hello", "Tushar") ;
}
