#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int secretNum=7;
	int guess;
	int guessCount=0;
	int guessLimit=3;
	bool out_of_guesses=false;
	
	while(secretNum != guess && !out_of_guesses)
	{
		if(guessCount<guessLimit)
		{
			cout<<"Enter your guess: ";
			cin>>guess;
			guessCount++;
		}
		else
			out_of_guesses=true;
		//didn't use braces since it is only 1 line.
	}
	
	if(out_of_guesses)
		cout<<"YOU LOSE!";
	else
		cout<<"YOU WIN!";
	
	return 0;
}
