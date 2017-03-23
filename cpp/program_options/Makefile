CC = g++
CFLAGS = -g -Wall -std=c++11

default: program_options

program_options: main.o
	$(CC) $(CFLAGS) -o program_options main.o

main.o:
	$(CC) $(CFLAGS) -c main.cpp

clean:
	$(RM) program_options *.o
