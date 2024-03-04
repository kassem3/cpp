/* Q)Write a C++ code which displays
the summation of numbers from 1 to 6. */

#include<iostream>
using namespace std;

int main()
{
//V.Imp. to initialize the value of sum as 0!
	int counter=1, sum=0;
	
	while(counter<=6)
	{
		sum = sum + counter;
		counter++;
	}
	
	cout<<"Summation: "<<sum;
	
	return 0;
}
