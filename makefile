main.o: Colosseum.h Dice.h Pokemon.h main.cpp
	g++ -g -Wall -c main.cpp


Lab01: main.o colosseum.o Pokemon.o Dice.o
	g++ -g -Wal main.o colosseum.o Pokemon.o -o Lab01


Dice.o: Dice.h Dice.cpp
	g++ -g -Wall -c Dice.cpp

Colosseum.o: Colosseum.h Colosseum.cpp
	g++ -g -Wall -c Colosseum.cpp

Pokemon.o: Pokemon.h Pokemon.cpp
	g++ -g -Wall -c Pokemon.cpp

HelloWorld: main.o
	g++ -std=c++11 -g -Wall main.o -o HelloWorld

Clean:
	rm *.o Lab01 HelloWorld
