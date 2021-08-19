#include<iostream>
#include<time.h>
#include <fstream>
#include<string>
using namespace  std;
#include"Hangman.h"
#include "tictacktoe.h"
int main()
{ 
	game1 obj1;
	game2 obj2;
	int a;
	do
	{
		system("color F5");
	    system("cls");
		int m=0;
	    cout<<"\n\n\n\n\t\t\t ****Welcome lets play****\t\t\t\t\t\t\n\n\n";
		cout<<"\n\n\n\n\t\t\tEnter  1 to play  Hangman ";
		cout<<"\n\t\t\tEnter  2 to play Ticktaktoe";
		cout<<"\n\t\t\tEnter  0 to End program\n\n\n";
		cin>>a;
		if (a==1)
		{
		
			do
			{
				obj1.game();
				cout<<"Enter 1 to play again 0 to exit : ";
				cin>>m;
			}while(m!=0);
		}
		else if(a==2)
		{
			int b;
			do
			{
				obj2.game();
				obj2.sqr();
				cout<<"Enter 1 to play again 0 to exit : ";
				cin>>m;
			}while(m!=0);
	        obj2.end();
		}
		else if(a==0)
		{break;}
		else
		{
			cout<<"\n\n\t\t\Invalid Vlue";
		}
	}while(a!=0);
	
	
}













