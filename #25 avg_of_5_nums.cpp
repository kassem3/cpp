/* Q)Display the average of 5 numbers
in which these numbers are entered by
the user using for-Loop. */

#include<iostream>
using namespace std;

int main()
{
	int sum=0, num;
	float avg;
	
	cout<<"Enter 5 numbers: ";	
	
	for(int cnt=1;cnt<=5;cnt++)
	{
		cin>>num;
		sum = sum + num;
	}
	
	avg=(float)sum/5;
	
	cout<<"Average: "<<avg;
	
	return 0;
}
