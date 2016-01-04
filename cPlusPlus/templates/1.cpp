#include<iostream>

int main()
{
	// Define 8 separate flags (these can represent whatever you want)
	// Note: in C++11, better to use "uint8_t" instead of "unsigned char"
	const unsigned char option1 = 0x01; // hex for 0000 0001
	const unsigned char option2 = 0x02; // hex for 0000 0010
	const unsigned char option3 = 0x04; // hex for 0000 0100
	const unsigned char option4 = 0x08; // hex for 0000 1000
	const unsigned char option5 = 0x10; // hex for 0001 0000
	const unsigned char option6 = 0x20; // hex for 0010 0000
	const unsigned char option7 = 0x40; // hex for 0100 0000
	const unsigned char option8 = 0x80; // hex for 1000 0000
	 
	// byte-size value to hold some combination of the above 8 options
	unsigned char myflags = 65; // we'll initialize it to all flags turned off to start

	std::cout << (myflags |= option4) << std::endl ;
}
