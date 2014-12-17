//=================================
// include guard
#ifndef __DECK_H_INCLUDED__
#define __DECK_H_INCLUDED__

//=================================
// included dependencies
#include<vector>
#include "card.h"
//=================================
// the actual class
class Deck
{
std::vector<Card> cards;		//vector containg the cards in a deck
int nextcardidx;				//Index to the next valid card available for drawing
public:
	void print();				//print the deck
	Deck();						//constructor of deck
	Card drawCard();			//return the top most valid card
	void Shuffle();				//shuffles the deck
};
#endif // __DECK_H_INCLUDED__ 
