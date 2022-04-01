CC=g++
CFLAGS=-std=c++11 -g -Wall
DEPS= 
OBJ= main.o

%.o: %.cc $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

next_move: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)

clean:
		rm -f *.o next_move
		clear