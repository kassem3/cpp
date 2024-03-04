#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int secretNum=7;
	int guess;
	
	while(guess!=secretNum) //can also use (secretNum!=guess)
	{
		cout<<"Enter your guess:";
		cin>>guess;
	}
	
	cout<<"YOU WIN!";
	
	return 0;
}
