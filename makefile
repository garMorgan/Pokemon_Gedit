lab1: main.o Dice.o pokemon.o
	g++ -g -Wall -o lab1 main.o Dice.o pokemon.o
main.o: main.cpp
	g++ -g -Wall -c main.cpp
Dice.o: Dice.cpp Dice.h
	g++ -g -Wall -c Dice.cpp
pokemon.o: pokemon.cpp pokemon.h
	g++ -g -Wall -c pokemon.cpp

clean:
	rm *.o lab1
