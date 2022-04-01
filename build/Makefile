OBJECTS = main.o
CFLAGS = -c -std=c++17

default: $(OBJECTS)
	g++  $(OBJECTS) -o next_move -g
	mv *.o ../objects
	mv next_move ../bin

main.o: ../src/main.cpp
	g++ $(CFLAGS) ../src/main.cpp

functions.o: ../includes/functions.h
	g++ $(CFLAGS) ../includes/functions.h

.PHONY: clean
clean:
	rm -rf ../objects/*.o
	rm -rf ../bin/*
	clear