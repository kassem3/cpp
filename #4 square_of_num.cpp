/* Q)Write a compelete C++ code which gets an
integer number from the user, then calculates
and displays the square of that number. */


#include<iostream>
using namespace std;

int main()
{
	int num;
	float square;
	
	cout<<"Enter a number: ";
	cin>>num;
	
	square = (num*num);
	
	cout<<"Square of the number = "<<square;
	
	return 0;
}
