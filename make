all: pokemon

pokemon: main.o Pokemon.o Colosseum.o Dice.o 
    g++ main.o Pokemon.o Colosseum.o Dice.o -o pokemon

main.o: main.cpp
    g++ -c main.cpp

Pokemon.o: Pokemon.cpp
    g++ -c Pokemon.cpp

Colosseum.o: Colosseum.cpp
    g++ -c Colosseum.cpp

Dice.o: Dice.cpp
    g++ -c Dice.cpp

clean:
    erase *.o pokemon
