//=================================
// include guard
#ifndef __DEALER_H_INCLUDED__
#define __DEALER_H_INCLUDED__

//=================================
// included dependencies
#include<vector>
#include "card.h"
//=================================
// the actual class
class Dealer
{
std::vector<Card> v;
public:
	void print();
};
#endif // __DEALER_H_INCLUDED__ 
