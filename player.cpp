#include "player.h"
#include <string>
#include <iostream>
Player::Player()
{
	gamesPlayed=0;
	gamesWon =0;
	gamesTied=0;
}
void Player::setName(std::string str)
{
	name=str;
}
std::string Player::getName()
{
	return name;
}
bool Player::hit_or_stay()
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
	return (double)gamesWon/gamesPlayed;
}
void Player::won()
{
	gamesWon++;
	gamesPlayed++;
}
void Player::lost()
{
	gamesPlayed++;
}
void Player::tie()
{
	gamesTied++;
}
