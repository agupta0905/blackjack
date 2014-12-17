/* Class Card*/
#include "card.h"
#include<iostream>
void Card::print()								//print the current card					
{
	const char heart[] = "\xe2\x99\xa5";		//unicode for heart
	const char diamond[] = "\xe2\x99\xa6";		//unicode for diamond
	const char club[] = "\xe2\x99\xa3";			//unicode for club
	const char spade[] = "\xe2\x99\xa0";		//unicode for spade
	switch(value)
	{
		case 1: 		std::cout<<"Ace of "; break;
		case 2 ... 10:	std::cout<<value << " of ";break;
		case 11:		std::cout<<"Jack of ";break;
		case 12:		std::cout<<"Queen of ";break;
		case 13:		std::cout<<"King of ";break;
		default: 		std::cout<<"Error in printing card value ";
	}
	switch(suit)
	{
		case 0: std::cout<<club<<"\t\t";break;		
		case 1:	std::cout<<diamond<<"\t\t";break;
		case 2:	std::cout<<heart<<"\t\t";break;
		case 3:	std::cout<<spade<<"\t\t";break;
		default: std::cout<<" Error in printing card suite\t";
	}
}
Card::Card(int a ,int b)					//constructor for card 
{
	suit=a;
	value=b;
}
int Card:: getValue()						//returns value of card
{
	return value;
}