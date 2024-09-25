CC = gcc
CXX = g++

CFLAGS = -Iinclude
SRC = src/calculator_main.c src/arithmetic/arithmetic.c src/trigonometry/trigonometry.c src/statistics/statistics.c src/matrix/matrix.c src/complex/complex_operations.cpp

OBJS = $(SRC:.c=.o)

calculator: $(OBJS)
	$(CC) $(OBJS) -o calculator -lm

clean:
	rm -f *.o calculator
