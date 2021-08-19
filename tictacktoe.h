
class tictaktoe
{
protected:
   char square[10];
   int a;
   int k;
   int counter1;
   int counter2;
public:

	tictaktoe()
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
		a=0;
		k=0;
		counter1=0;
		counter2=0;
	}
	
int players();

int checkwin1();

char sqr();

void board();

void end();

};
class game2 : public tictaktoe
{
public:
	int game();
};