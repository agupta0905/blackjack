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
std::vector<Card> cards;
int nextcardidx;
public:
	void print();
	Deck();
	Card drawCard();
	void Shuffle();
};
#endif // __DECK_H_INCLUDED__ 
