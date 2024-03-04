/* Q)Write a C++ program that displays the
summation of all the numbers between 1 to 6
using for loop then display their average. */

#include<iostream>
using namespace std;

int main()
{
	int sum=0;
	float avg;
	
	for(int ctr=1;ctr<=6;ctr++)
	{
		sum = sum + ctr;
	}

	avg=(float)sum/6;

	cout<<"Average: "<<avg;
	
	
	return 0;
}
