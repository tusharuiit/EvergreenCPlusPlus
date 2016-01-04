#include <iostream>
#include <string>
#include <math.h>

double average(double a, double b)
{
	return (a + b) / 2.0;
}

double add(double a, double b)
{
	return a + b;
}

double sub(double a, double b)
{
	return a - b;
}

double mul(double a, double b)
{
	return a * b;
}

double div(double a, double b)
{
	return a / b;
}


double compute_result(std::string oper, double first_number, double second_number)
{
	double result;

	if (oper == "*")
	{
		result = mul(first_number, second_number);
	}
	else if (oper == "/")
	{
		result = div(first_number, second_number);
	}
	else if (oper == "+")
	{
		result = add(first_number, second_number);
	} 
	else if (oper == "-")
	{
		result = sub(first_number, second_number);
	}
	else if (oper == "av")
	{
		result = average(first_number, second_number);
	}

	return result;
}

int main(int argc, char* argv[])
{

	// what do we expect next?
	#define FIRST_NUMBER 0
	#define OPERATOR 1
	#define SECOND_NUMBER 2


	int expected_token = FIRST_NUMBER;

	std::string oper;
	double first_number;
	double second_number;

	std::string new_token;
	while (true)
	{

		if (expected_token == FIRST_NUMBER) 
		{
			std::cout << "Enter first_number number: " << std::endl;

			// while ( not true ) 
			while (!(std::cin >> first_number))
			{
				// clear the input buffer
				std::cout << "Enter first_number number: " << std::endl;
				std::cin.clear();
				std::cin.ignore(10, '\n');
			}

			expected_token = OPERATOR;
		}
		else if (expected_token == OPERATOR)
		{
			std::cout << "Enter operator: " << std::endl;
			std::cin >> oper;

			if (! ((oper == "*") || (oper == "/") || 
				   (oper == "+") || (oper == "-") || 
				   (oper == "av")) )
			{
				std::cout << "Wrong operator.\n Please enter operator again\n";
				continue;
			}

			expected_token = SECOND_NUMBER;
		}
		else if (expected_token = SECOND_NUMBER)
		{
			std::cout << "Enter second_number number: " << std::endl;
			while (!(std::cin >> second_number))
			{
				std::cout << "Enter second_number number: " << std::endl;
				std::cin.clear();
				std::cin.ignore(10, '\n');
			}

			// control of proximity to 0.0 (we can not devide by zero)
			if ((fabs(second_number - 0.0) < 1e-5) && (oper == "/"))
			{
				std::cout << "wrong second number for division\n";
				expected_token = FIRST_NUMBER;
				continue;
			}
			expected_token = FIRST_NUMBER;

			
			
			double result = compute_result(oper, first_number, second_number);
			

			std::cout << "Result: " << result << std::endl;
			std::cout << "----------------------\n" << std::endl;
		}

	}

}
