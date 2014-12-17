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
	int non_ace_total;
	int num_aces;
public:
	void printHand();
	void add(Card c);
	int bestscore();
	void printScore();
	void clearHand();
};
#endif // __PARTICIPANT_H_INCLUDED__ 
