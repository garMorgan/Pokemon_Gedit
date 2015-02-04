lab1: main.o Dice.o pokemon.o colosseum.o
	g++ -g -Wall -o lab1 main.o Dice.o pokemon.o colosseum.o
main.o: main.cpp colosseum.h
	g++ -g -Wall -c main.cpp
Dice.o: Dice.cpp Dice.h
	g++ -g -Wall -c Dice.cpp
pokemon.o: pokemon.cpp pokemon.h
	g++ -g -Wall -c pokemon.cpp
colosseum: colosseum.cpp colosseum.h Dice.h pokemon.h
	g++ -g -Wall -c colosseum.cpp

clean:
	rm *.o lab1
