CC = g++
CFLAGS = -c -g -Wall -msse2
SRCS = main.c matrix.c helper.c
DEPS = matrix.h helper.h
OBJS = $(SRCS:.c=.o)
LIBS = -framework veclib

prog: $(OBJS) $(DEPS)
	$(CC) $(OBJS) -o prog $(LIBS)

.c.o:
	$(CC) $(CFLAGS) $< 

clean:
	rm -rf *~ *o *d prog

tar:
	tar cf code.tar  Makefile *.c *.h *.py
