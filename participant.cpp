#include "participant.h"
#include <iostream>
#include "card.h"
void Participant::printHand()
{
	for(int i=0;i<hand.size();i++)
	{
		hand[i].print();
	}	
	std::cout<<"\n";
}
void Participant::add(Card c)
{
	hand.push_back(c);
	if(c.getValue()==1)
	{
		num_aces++;
	}
	else if(c.getValue()>=10)
	{
		non_ace_total+=10;
	}
	else
	{
		non_ace_total+=c.getValue();
	}
}
void Participant::clearHand()
{
	hand.clear();
	num_aces=0;
	non_ace_total=0;
}
int Participant::bestscore()
{
	int score_high;
	int score_low;
	if(num_aces==0)
	{
		return non_ace_total;
	}
	else
	{
		score_low = non_ace_total+ num_aces;
		score_high = non_ace_total+ 10 + num_aces;
		return score_high < 22 ? score_high:score_low; 
	}
}
void Participant::printScore()
{
	std::cout<<"Score = "<<bestscore()<<"\n";
}