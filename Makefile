all: blackjack

blackjack: main.o deck.o card.o player.o dealer.o
	g++ -std=c++0x main.o deck.o card.o player.o dealer.o -o blackjack

test:	test.o deck.o card.o player.o dealer.o
	g++ -std=c++0x test.o deck.o card.o player.o dealer.o -o test

main.o: main.cpp
	g++ -std=c++0x -c main.cpp

test.o: test.cpp
	g++ -std=c++0x -c test.cpp

deck.o: deck.cpp
	g++ -std=c++0x -c deck.cpp

card.o: card.cpp
	g++ -std=c++0x -c card.cpp

player.o: player.cpp
	g++ -std=c++0x -c player.cpp

dealer.o: dealer.cpp
	g++ -std=c++0x -c dealer.cpp

clean:
	rm -rf *o blackjack test
