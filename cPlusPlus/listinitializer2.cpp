#include<iostream>
#include<vector>
#include<initializer_list>

class MyStruct
{
private:
 
public:
    MyStruct(int x, float y): m_nX(x), m_nY(y) {};
    int m_nX;
    float m_nY;
};
 


int main()
{
	MyStruct foo1 {3, 4.5f};
	MyStruct foo2 (2, 3.5f);
	std::cout << foo1.m_nX << std::endl ;
	std::cout << foo2.m_nY << std::endl ;

	std::vector<int> v1(8); // creates an empty vector of size 8, using the int constructor
	std::vector<int> v2{8};

	std::cout << v1.size() << std::endl ;
	std::cout << v2.size() << std::endl ;
}
