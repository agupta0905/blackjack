/*Class Participant (Either Dealer or Player) */
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
	std::vector<Card> hand;		//Vector containing cards in hand of a participant
	int non_ace_total;			//Total of all non ace cards in hand
	int num_aces;				//Number of aces in hand
public:
	void printHand();			//Print Cards at hand
	void add(Card c);			//Add card to hand
	int bestscore();			//Return the best possible score
	void printScore();			//Print the score of Participant
	void clearHand();			//Remove all cards from hand
};
#endif // __PARTICIPANT_H_INCLUDED__ 
