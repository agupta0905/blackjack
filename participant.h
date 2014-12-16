//=================================
// include guard
#ifndef __PARTICIPANT_H_INCLUDED__
#define __PARTICIPANT_H_INCLUDED__

//=================================
// included dependencies
#include "card.h"
#include <vector>
//=================================
// the actual class
class Participant
{
protected:
	std::vector<Card> hand;
public:
	void printHand();
	void add(Card c);
	int bestscore();
};
#endif // __PARTICIPANT_H_INCLUDED__ 
