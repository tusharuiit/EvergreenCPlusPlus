#include <iostream>
#include <cstdint>
#include <vector>
 
int main()
{
//	int16_t i(5); // implicit assignment
//	std::cout << i << std::endl ;
//	std::cout << sizeof(int16_t) << std::endl ;
//	std::cout << sizeof(i) << std::endl ;
//	return 0;

//	auto w = "hi";
//	std::cout << w[0] << std::endl ;

	const std::vector<int> v(5);
	std::cout << v.size() << std::endl ;
	std::cout << v[0] << std::endl ;
	std::cout << v[1] << std::endl ;
	std::cout << v[2] << std::endl ;
}
