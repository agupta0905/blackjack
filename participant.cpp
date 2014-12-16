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
}
int Participant::bestscore()
{
	int num_aces=0;
	int non_ace_total=0;
	int score_low;
	int score_high;
	for(int i=0;i<hand.size();i++)
	{
		if(hand[i].getValue()==1)
		{
			num_aces++;
		}
		else if(hand[i].getValue()<10)
		{
			non_ace_total+=hand[i].getValue();
		}
		else
		{
			non_ace_total+=10;
		}
	}
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