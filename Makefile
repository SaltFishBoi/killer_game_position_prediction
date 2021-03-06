CC = gcc
CFLAGS = -Wall -ansi -pedantic -g
MAIN = main
OBJS = main.o
all : $(MAIN)

$(MAIN) : $(OBJS)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

main.o : main.c
	$(CC) $(CFLAGS) -c main.c

clean :
	rm *.o $(MAIN) core
