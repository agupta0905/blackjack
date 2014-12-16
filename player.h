//=================================
// include guard
#ifndef __PLAYER_H_INCLUDED__
#define __PLAYER_H_INCLUDED__

//=================================
// included dependencies
#include<vector>
#include "card.h"
//=================================
// the actual class
class Player
{
std::vector<Card> v;
public:
	void print();
};
#endif // __PLAYER_H_INCLUDED__ 
