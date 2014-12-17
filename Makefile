all: blackjack

blackjack: main.o deck.o card.o player.o dealer.o participant.o
	g++ -std=c++0x main.o deck.o card.o player.o dealer.o participant.o -o blackjack

main.o: main.cpp
	g++ -std=c++0x -c main.cpp

deck.o: deck.cpp
	g++ -std=c++0x -c deck.cpp

card.o: card.cpp
	g++ -std=c++0x -c card.cpp

participant.o: participant.cpp
	g++ -std=c++0x -c participant.cpp

player.o: player.cpp
	g++ -std=c++0x -c player.cpp

dealer.o: dealer.cpp
	g++ -std=c++0x -c dealer.cpp

clean:
	rm -rf *o blackjack test
