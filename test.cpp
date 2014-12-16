#include<iostream>
#include "deck.h"
#include "card.h"
int main()
{
	//Card c(0,11);
	//c.print();
	Deck d;
	d.print();
	std::cout <<"Done\n";
	(d.drawCard()).print();
	(d.drawCard()).print();
}
