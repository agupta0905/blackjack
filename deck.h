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
std::vector<Card> v;
public:
	void print();
};
#endif // __DECK_H_INCLUDED__ 
