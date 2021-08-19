
using namespace std;

class hangman
{
protected:
	string name;
	int stringl;
	int missgussed;
	int mistake;
	int correct;
	char guessed;
public:
	
	hangman()
	{
		stringl=0;
		missgussed=0;
		mistake=0;
		correct=0;
	}
	
void hanging(); 

void win();

void lost();

void capital();

void cheakMistake();

bool cheakWin();

void wordS();

void getalpha();

};
class game1:public hangman
{
public:
	void game();
};