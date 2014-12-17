/*Class Dealer*/
#include "dealer.h"
void Dealer::printUpcard()	//Print Initial Upcard
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
bool Dealer::hit_or_stay()		//Returns true if the dealer hits else false (Dealer hits on soft 17)
{
	int score_low;				//When Aces are considered as 1
	int score_high;				//When One Ace is considered as 11 
	if(num_aces==0)
	{
		return non_ace_total<17 ? true:false;		// Dealer stands on hard 17 and above
	}
	else
	{
		score_low=non_ace_total+ num_aces;
		score_high=non_ace_total+ num_aces+10;
		if(score_high<18)							//Higher score is 17 or less (hit on soft 17 or lower)
		{
			return true;
		}
		else if(score_high>21 && score_low <17)		//Lower score is below 17 and All Aces are considered as 1
		{
			return true;
		}
		else										//Higher score is more than 17 or lower score is more than 16
		{
			return false;
		}
	}
}