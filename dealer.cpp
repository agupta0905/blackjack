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
Dealer::Dealer()
{

}
bool Dealer::hit_or_stay()
{
	int score1;
	int score2;
	if(num_aces==0)
	{
		return non_ace_total<17 ? true:false;
	}
	else
	{
		score1=non_ace_total+ num_aces;
		score2=non_ace_total+ num_aces+10;
		return score2<18? true:false;
	}
}