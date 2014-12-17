#include "dealer.h"
void Dealer::printUpcard()
{
	if(hand.size()>1)
	{
		hand[0].print() ;
		std::cout<<" X (face down card)\n";
	}
	else
	{
		std::cout<<"Error printing up card\n";
	}
}
bool Dealer::hit_or_stay()
{
	int score_low;
	int score_high;
	if(num_aces==0)
	{
		return non_ace_total<17 ? true:false;
	}
	else
	{
		score_low=non_ace_total+ num_aces;
		score_high=non_ace_total+ num_aces+10;
		if(score_high<18)
		{
			return true;
		}
		else if(score_high>21 && score_low <17)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}