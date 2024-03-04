/* Q)Write a C++ code which prompts the
user to enter 5 numbers, then calculates
and displays their summation. */

#include<iostream>
using namespace std;

int main()
{
	int counter=1, sum=0, num;
	
	cout<<"Enter Numbers: ";

	while(counter<=5)
	{
		cin>>num;
		sum = sum + num;
		counter++;	
	}
	
	cout<<"Summation: "<<sum;
	
	
	return 0;
}
