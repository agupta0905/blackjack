#include <iostream>
#include <string>
#include "deck.h"
#include "card.h"
#include "player.h"
#include "dealer.h"
#include <unistd.h>
using namespace std;
bool nextGame()
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
	do
	{
		p.clearHand();
		computer.clearHand();
		if(num_games%6==0)
		{
			d.Shuffle();
			cout<<"Deck Shuffled\n"<<endl;
		}
		cout<<"#####################################\n";
		cout<<"ROUND "<<++num_games<<"\n\n"<<endl;
		cout<<"Dealer draws 2 cards\n";
		//usleep(1000000);
		cout<<"Dealer's Hand\n";
		
		computer.add(d.drawCard());
		computer.add(d.drawCard());
		computer.printUpcard();
		
		cout<<"\nDealer deals 2 cards to "+p.getName()<<endl;
		//usleep(1000000);
		p.add(d.drawCard());
		p.add(d.drawCard());
		cout<<p.getName()+"'s Hand"<<endl;
		p.printHand();
		p.printScore();
		cout<<endl;
		
		cout<<p.getName()+"'s"+" Turn to play"<<endl;
		while(p.bestscore()<21 && p.hit_or_stay())
		{
			p.add(d.drawCard());
			cout<<p.getName()+"'s Hand"<<endl;
			p.printHand();
			p.printScore();
			cout<<endl;
		}
		if(p.bestscore()>21)
		{
			p.lost();
			cout<<p.getName()+" Lost the Game"<<endl;
		}
		else
		{
			cout<<"\nDealer's Turn to play"<<endl;
			//usleep(1000000);
			cout<<"Dealer's Hand"<<endl;
			computer.printHand();
			computer.printScore();
			cout<<endl;
			while(computer.hit_or_stay())
			{
				cout<<"Dealer hits\n";
				computer.add(d.drawCard());
				//usleep(1000000);
				cout<<"Dealer's Hand"<<endl;
				computer.printHand();
				computer.printScore();
				cout<<endl;
			}
			if(computer.bestscore()>21)
			{
				p.won();
				cout<<p.getName()+" Won the Game"<<endl;		
			}
			else
			{
				if(p.bestscore() > computer.bestscore())
				{
					p.won();
					cout<<p.getName()+" Won the Game"<<endl;		
				}
				else if(p.bestscore() < computer.bestscore())
				{
					p.lost();
					cout<<p.getName()+" Lost the Game"<<endl;			
				}
				else
				{
					p.tie();
					cout<<"Game Tied"<<endl;	
				}
			}
		}
	}while(nextGame());
	cout<<p.getName()<<" Won "<<p.getWinpercentage()*100<<"\% of all games played\n";
	cout<<"Bye Bye\n\n"<<endl;
	return 0;
}
