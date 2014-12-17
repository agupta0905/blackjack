/*Class Player*/
#include "player.h"
#include <string>
#include <iostream>
Player::Player()				//intialise class variables
{
	gamesPlayed=0;
	gamesWon =0;
	gamesTied=0;
}
void Player::setName(std::string str)	//set name of player
{
	name=str;
}
std::string Player::getName()			//return name of player
{
	return name;
}
bool Player::hit_or_stay()				//return true if the player hits else return false
{
	std::string response;
	std::cout<< "Press h to hit and s to stay : ";
	std::cin>>response;
	while(response.length()!=1 || (response[0]!='h' && response[0]!='s'))
	{
		std::cout<< "Incorrect Input\n";
		std::cout<< "Press h to hit and s to stay : ";
		std::cin>>response;
	}
	if(response[0] == 'h')
	{
		return true;
	}
	else
	{
		return false;
	}
}
double Player::getWinpercentage()
{
	return (double)gamesWon/gamesPlayed;	//returns the win percentage
}
int Player::numPlayed()						//returns number of games Played
{
	return gamesPlayed;
}
int Player::numWon()						//Returns number of games Won
{
	return gamesWon;
}
int Player::numTied()						//Returns number of games Tied
{
	return gamesTied;
}
void Player::won()							//player won
{
	gamesWon++;
	gamesPlayed++;
}
void Player::lost()							//player lost
{
	gamesPlayed++;
}
void Player::tie()							//round tied
{
	gamesTied++;
	gamesPlayed++;
}
