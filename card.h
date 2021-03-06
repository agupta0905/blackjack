//=================================
// include guard
#ifndef __CARD_H_INCLUDED__
#define __CARD_H_INCLUDED__

//=================================
// included dependencies
//=================================
// the actual class
class Card
{
	int suit;		// 0 clubs, 1 diamond, 2 heart, 3 spade
	int value;		// 1 Ace, 2, 3 ...10, 11-Jack, 12-Queen, 13-King 
public:
	void print();	//prints the card
	Card(int a, int b);		//a is suite, b is value
	int getValue();	//returns value of the card
};
#endif // __CARD_H_INCLUDED__ 
