#include <stdlib.h>
#include <iostream>
#include <cmath>

int main(int argc, char *argv[])
{
	srand(5);
	int max = 5;
	int c = 0;

	for (int i = 0; i < max; i++)
	{
		//float x = (float)random()/(float)RAND_MAX;
		float x = (float)rand();
		//float y = (float)random()/(float)RAND_MAX;
		std::cout  << x << std::endl;

		//if (x*x + y*y < (float)1)
			//c++;
	}

	std::cout << "Sampling points: " << max << std::endl;
	std::cout << "Outer sampling points: " << c << std::endl;
	//std::cout << "Pi: " << (float)4.0*((float)c/(float)max) << std::endl;
}
