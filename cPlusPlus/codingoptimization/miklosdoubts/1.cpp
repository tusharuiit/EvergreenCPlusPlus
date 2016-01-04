#include<iostream>
#include<string>
using namespace std ;


class pair1
    {
	    double x, y;
		public:
		pair1() { std::cout << "in default constructor " << std::endl ; }
	    pair1(const string & s) { std::cout << "hello how are you ? " << std::endl ; }
	    bool operator == (const pair1& c) const { return 0 ; }
    };

int main()
{

pair1 p;
std::cout << " point 1 " << std::endl ;
std::string s;
if (p == s) {  }


}
