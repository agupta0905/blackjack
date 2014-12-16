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
class Dealer: public Participant
{
public:
	bool hit_or_stay();
	void printUpcard();
};
#endif // __DEALER_H_INCLUDED__ 
