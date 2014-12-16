//=================================
// include guard
#ifndef __PLAYER_H_INCLUDED__
#define __PLAYER_H_INCLUDED__

//=================================
// included dependencies
#include<vector>
#include<string>
#include "card.h"
#include "participant.h"
//=================================
// the actual class
class Player: public Participant
{
int gamesPlayed;
int gamesWon;
int gamesTied;
std::string name;
public:
	bool hit_or_stay();
	std::string getName();
	void setName(std::string str);
	double getWinpercentage();
	void won();
	void lost();
	void tie();
	Player();
};
#endif // __PLAYER_H_INCLUDED__ 
