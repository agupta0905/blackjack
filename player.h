/* Class Player*/
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
class Player: public Participant		//Player inherits from Participant 
{
int gamesPlayed;
int gamesWon;
int gamesTied;
std::string name;						//Name of the player
public:
	bool hit_or_stay();					//Returns true if the player hits else false
	std::string getName();				//Returns name of the player
	void setName(std::string str);		//Set the name of the player
	double getWinpercentage();			//Returns the percentage of the games won 
	void won();							//Called win Player Wins
	void lost();						//Called when Player loses
	void tie();							//Called when ROund Tied
	Player();							//constructor
	int numPlayed();					//Returns number of games played
	int numWon();						//Returns number of games won
	int numTied();						//Returns number of games Tied
};
#endif // __PLAYER_H_INCLUDED__ 
