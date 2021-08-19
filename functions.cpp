#include<iostream>
#include<time.h>
#include <fstream>
#include<string>
using namespace  std;
#include "Hangman.h"
#include "tictacktoe.h"
void hangman ::hanging()    
{
	
	        cout<<"     -------"<<endl;
			cout<<"    |      ";
			if(mistake<2)
				cout<<endl;
			if(mistake>=2)
			    cout<<"|"<<endl;
			cout<<"    |      ";
			if(mistake<3)
				cout<<endl;
			if(mistake>=3)
				cout<<"O"<<endl;
			cout<<"    |    ";
			if(mistake<4)
				cout<<endl;
			if(mistake==4)
				cout<<"  |"<<endl;
			if(mistake==5)
				cout<<"--|"<<endl;;
			if(mistake>=6)
				cout<<"--|--"<<endl;;
			cout<<"    |     ";
			if(mistake<7)
				cout<<endl;
			if(mistake==7)
				cout<<"  \\"<<endl;
			if(mistake>=8)
				cout<<"/ \\"<<endl;
			cout<<"    |"<<endl;
			cout<<"    |"<<endl;
			cout<<"---------"<<endl<<endl;
}
void hangman :: win()
{
	system ("cls");
	cout<<"\n\n\n\n\n\n\t\t\tYou won\n\n\n\n";
}

void  hangman ::lost()
	{
		int i=0;
		while(i!=5)
		{
			system("cls");
			cout<<"     -------"<<endl;
			cout<<"    |      |"<<endl;
			cout<<"    |      O"<<endl;
			cout<<"    |    --|--"<<endl;
			cout<<"    |     / \\"<<endl;
			cout<<"    |"<<endl;
			cout<<"    |"<<endl;
			cout<<"---------"<<endl<<endl;
			_sleep(250);
			system("cls");
			cout<<"     -------"<<endl;
			cout<<"    |      |"<<endl;
			cout<<"    |      O"<<endl;
			cout<<"    |     /|\\"<<endl;
			cout<<"    |     | |"<<endl;
			cout<<"    |"<<endl;
			cout<<"    |"<<endl;
			cout<<"---------"<<endl;
			_sleep(250);
			i++;
		}
		cout<<"\n\n\n\t\tYou lost\n\n\n";
		cout<<"\n\t\tCorect word was "<<name<<"\n\n";
}

void hangman :: capital()
{
	for(int i=65;i<91;i++)
	{
		if(guessed==(char)i)
		{
			guessed=(char)i+(char)32;
		}
	}
	
}
void hangman :: cheakMistake()
{
	
	if(missgussed==stringl)
	   mistake++;

}
bool hangman :: cheakWin()
{
	
	if(missgussed==stringl)               
		return false;
	if(mistake==8)
	   return true;
}
void hangman :: wordS()
{
	int x;                                             
		ifstream lol;             
		lol.open("game.txt");     
		x=(rand()%10)+1;
		if(lol.is_open())
		{
			for(int i=0;i<x;i++)  
			{
				lol>>name;
			}
		}
}
void hangman :: getalpha()
{
	cout<<"Enter letter : ";       
	cin>>guessed;
}
void game1::game()
{
	stringl=0;
	missgussed=0;
	mistake=0;
	correct=0;
	wordS();                      
	stringl=name.length();             
	char *f1,*f2;              
	f1=new char[stringl];
	f2=f1;
	for(int i=0;i<stringl;i++)
	{
		*f1='0';             
		f1++;                
	}
	while(correct!=stringl)                   
	{
		system("cls");
		system("color F5");
		cout<<"\t\t\t\tH A N G M A N";
		f1=f2;                      
		missgussed=0;                        
		cout<<"\n\n\n\t\t\t";
		for(int i=0;i<stringl;i++)
			{
				if(guessed!=name.at(i))
					missgussed++;
				
				if(guessed==name.at(i) && f1[i]!=guessed )  
				{
					f1[i]=guessed;                
					correct++;
				}
				if(guessed==f1[i] || f1[i]!='0' ) 
				{
					cout<<f1[i];
				}
				else
				{
				cout<<"_ ";
				}
			}
		cout<<endl<<endl<<endl;
			cheakMistake();
			hanging();
		if(correct==stringl )               
				break;
		if(mistake==8)
		break;
		getalpha();
		
	}
	if(cheakWin()==false)
		lost();
	else
		win();
}

int tictaktoe ::  checkwin1()
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}
char tictaktoe ::  sqr()
{
	square[0]='F';
		square[1]='1';
		square[2]='2';
		square[3]='3';
		square[4]='4';
		square[5]='5';
		square[6]='6';
		square[7]='7';
		square[8]='8';
		square[9]='9';
		return square[10];
}
void tictaktoe ::  board()
{
    system("color F5");
	
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";
	cout <<"Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}
int game2 ::  game()
{
	
		k=1;

	int player = 0,i,choice;
	int time=player%2+1;
	do
	{
		board();
		time=player%2+1;
		char arr[3]={'O','X','O'};
		cout << "Player " << time << ", enter a number:  ";
		cin >> choice;

		if (choice == 1 && square[1] == '1')

			square[1] = arr[time];
		else if (choice == 2 && square[2] == '2')

			square[2] = arr[time];
		else if (choice == 3 && square[3] == '3')

			square[3] = arr[time];
		else if (choice == 4 && square[4] == '4')

			square[4] = arr[time];
		else if (choice == 5 && square[5] == '5')

			square[5] = arr[time];
		else if (choice == 6 && square[6] == '6')

			square[6] = arr[time];
		else if (choice == 7 && square[7] == '7')

			square[7] = arr[time];
		else if (choice == 8 && square[8] == '8')

			square[8] = arr[time];
		else if (choice == 9 && square[9] == '9')

			square[9] = arr[time];
		else
		{
			cout<<"Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
		i=checkwin1();

		player++;
	}while(i==-1);
	if(time==1)
	{counter1++;}
	if(time==2)
	{counter2++;}
	board();
	if(i==1)

		cout<<"\aPlayer "<< time <<" win \n\n";
	else
		cout<<"==>\aGame draw\n\n";

	
	return 0;
}
void tictaktoe ::  end()
{
	if(counter1!=0 || counter2!=0)
	{
		cout<<"\n\n\n\n\t\t\t Player 1 won "<<counter1<<" times \t\t\t\t\t\t";
	    cout<<"\n\t\t\t Player 2 won "<<counter2<<" times \t\t\t\t\t\t";
	}
}