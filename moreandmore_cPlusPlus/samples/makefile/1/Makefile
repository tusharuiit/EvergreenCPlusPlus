# Declaration of variables
CC = g++
CC_FLAGS = -w

# Main target
example: example.o
	$(CC) example.o -o example

# To obtain example.o
example.o: example.cpp example.hh
	$(CC) $(CC_FLAGS) -c example.cpp

# To remove generated files
clean:
	rm -f example example.o
