#include "card.h"
#include<iostream>
void Card::print()
{
	const char heart[] = "\xe2\x99\xa5";
	const char diamond[] = "\xe2\x99\xa6";
	const char club[] = "\xe2\x99\xa3";
	const char spade[] = "\xe2\x99\xa0";
	switch(value)
	{
		case 1: 		std::cout<<"Ace of "; break;
		case 2 ... 10:	std::cout<<value << " of ";break;
		case 11:		std::cout<<"Jack of ";break;
		case 12:		std::cout<<"Queen of ";break;
		case 13:		std::cout<<"King of";break;
		default: 		std::cout<<"Error in printing card value ";
	}
	switch(suite)
	{
		case 0: std::cout<<club<<"\t";break;		
		case 1:	std::cout<<diamond<<"\t";break;
		case 2:	std::cout<<heart<<"\t";break;
		case 3:	std::cout<<spade<<"\t";break;
		default: std::cout<<" Error in printing card suite\t";
	}
}
Card::Card(int a ,int b)
{
	suite=a;
	value=b;
}