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
	int num_aces=0;
	int non_ace_total=0;
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
		return non_ace_total<17 ? true:false;
	}
	else
	{
		int score1=non_ace_total+ num_aces;
		int score2=non_ace_total+ num_aces+10;
		return score2<18? true:false;
	}
}