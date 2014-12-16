#include"deck.h"
#include<iostream>
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock
#include <algorithm>    // std::shuffle
#define NUM_CARDS 52
#define NUM_SUITS 4
void Deck::Shuffle()
{
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	shuffle (cards.begin(), cards.end(), std::default_random_engine(seed));
	nextcardidx=0;
}
Deck::Deck()
{
	for(int i=0;i<NUM_SUITS;i++)
	{
		for(int j=0;j<NUM_CARDS/NUM_SUITS;j++)
		{
			Card c(i,j+1);
			cards.push_back(c);
		}
	}
	Shuffle();
	//nextcardidx=0;
}
void Deck::print()
{
	for(int i=0;i<cards.size();i++)
	{
		cards[i].print();
		std::cout<<"\n";
	}
}
Card Deck::drawCard()
{
	if(nextcardidx < 0 || nextcardidx > 51)
	{
		std::cout<<"Error in drawing card\n";
	}
	return cards[nextcardidx++];
}
