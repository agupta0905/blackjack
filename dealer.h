/*Class Dealer*/
//=================================
// include guard
#ifndef __DEALER_H_INCLUDED__
#define __DEALER_H_INCLUDED__

//=================================
// included dependencies
#include <vector>
#include "card.h"
#include "participant.h"
#include <iostream>
//=================================
// the actual class
class Dealer: public Participant   //Dealer Inherits from Participant
{
public:
	bool hit_or_stay();				//Returns True if Dealer hits else false (Dealer Hits on Soft 17)
	void printUpcard();				//Print the initial Upcard 
};
#endif // __DEALER_H_INCLUDED__ 
