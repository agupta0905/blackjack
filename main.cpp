/* Blackjack Game 
One Deck 
One Player
Dealer hits on Soft 17*/

//Includes 
#include <iostream>
#include <string>
#include "deck.h"
#include "card.h"
#include "player.h"
#include "dealer.h"
#include <unistd.h>
using namespace std;

bool nextGame()					//Returns True if the PLayer wants to play another round else returns False
{
	string response;
	cout<<"Press Y to continue playing and N to exit: ";
	cin>>response;
	while(response.length()!=1 || (response[0]!='Y' && response[0]!='N'))
	{
		cout<<"Incorrect Input\n";
		cout<<"Press Y to continue playing and N to exit: ";
		cin>>response;
	}
	if(response[0]=='Y')
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	//Initialization
	///////////////////////////////////
	int num_games=0;
	Deck d;
	Player p;
	Dealer computer;
	string str;
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	cout<<"\n\nWELCOME TO BLACKJACK\n\n";
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";
	cout<<"Please enter your first name: ";
	cin>> str;
	p.setName(str);
	//////////////////////////////////
	do
	{
		p.clearHand();
		computer.clearHand();
		if(num_games%6==0)											//Shuffle deck every 6 rounds
		{
			d.Shuffle();
			cout<<"Deck Shuffled\n"<<endl;
		}
		cout<<"#####################################\n";
		cout<<"ROUND "<<++num_games<<"\n\n"<<endl;

		
		/////Initial Deal of 2 cards to both Dealer and Player///////
		////////////////////////////////////////////////////////////
		cout<<"Dealer draws 2 cards\n";							//Initial 2 cards for Dealer
		cout<<"Dealer's Hand\n";
		computer.add(d.drawCard());
		computer.add(d.drawCard());
		computer.printUpcard();
		
		cout<<"\nDealer deals 2 cards to "+p.getName()<<endl;	//Intial 2 cards for Player
		p.add(d.drawCard());
		p.add(d.drawCard());
		cout<<p.getName()+"'s Hand"<<endl;
		p.printHand();
		p.printScore();

		cout<<endl;
		///////////////////////////////////////////////

		cout<<p.getName()+"'s"+" Turn to play"<<endl;			//Players Turn
		while(p.bestscore()<21 && p.hit_or_stay())
		{
			p.add(d.drawCard());
			cout<<p.getName()+"'s Hand"<<endl;
			p.printHand();
			p.printScore();
			cout<<endl;
		}
		if(p.bestscore()>21)									//If PLayer exceeded a total of 21
		{
			p.lost();											//Player Loses
			cout<<p.getName()+" Lost the Game"<<endl;
		}
		else
		{
			cout<<"\nDealer's Turn to play"<<endl;				//Dealers Turn
			cout<<"Dealer's Hand"<<endl;
			computer.printHand();
			computer.printScore();
			cout<<endl;
			while(computer.hit_or_stay())						
			{
				cout<<"Dealer hits\n";
				computer.add(d.drawCard());
				cout<<"Dealer's Hand"<<endl;
				computer.printHand();
				computer.printScore();
				cout<<endl;
			}
			if(computer.bestscore()>21)							//Id Dealer exceeded a total of 21
			{
				p.won();										//Player Wins
				cout<<p.getName()+" Won the Game"<<endl;			
			}
			else												//Both Player and Dealer didn't exceed the score of 21
			{
				if(p.bestscore() > computer.bestscore())		//Player has higher score
				{
					p.won();
					cout<<p.getName()+" Won the Game"<<endl;		
				}
				else if(p.bestscore() < computer.bestscore())	//Dealer has higher score
				{
					p.lost();
					cout<<p.getName()+" Lost the Game"<<endl;			
				}
				else											//Both have same score
				{
					p.tie();						
					cout<<"Game Tied"<<endl;	
				}
			}
		}
	}while(nextGame());
	
	cout<<endl;
	cout<<p.getName()<<" Won "<<p.getWinpercentage()*100<<"\% of all games played\n";
	cout<<"Games Played = "<<p.numPlayed()<<endl;
	cout<<"Games Won = "<<p.numWon()<<endl;
	cout<<"Games Tied = "<<p.numTied()<<endl;
	cout<<"Bye Bye\n\n"<<endl;
	return 0;
}
