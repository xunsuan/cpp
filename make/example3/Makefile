CC = gcc
CFLAGS = -g -Wall

default: count

count: counter.o foo.o
	$(CC) $(CFLAGS) -o count counter.o foo.o

counter.o: counter.c
	$(CC) $(CFALGS) -c counter.c

foo.o: foo.c foo.h
	$(CC) $(CFALGS) -c foo.c

clean:
	$(RM) count *.o *-

