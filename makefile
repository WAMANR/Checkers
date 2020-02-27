CC = gcc
CFLAGS = -Wall 
GLUTFLAGS = -lGL -lGLU -lglut -lm
EXEC = checkers
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)


all: $(EXEC)


checkers:	$(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(GLUTFLAGS)


%.o: %.c 
	$(CC) -o $@ -c $^ $(CFLAGS)


clear:	
		rm *.o *~ core -rf $(EXEC)


zip:
	tar -cvf checkers.tar *.c *.h makefile
	gzip checkers.tar
