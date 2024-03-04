/* Q)Write a C++ program that displays the
summation of all the numbers between 1 to 6
using for-loop. */

#include<iostream>
using namespace std;

int main()
{
	int sum=0;
	
	for(int ctr=1;ctr<=6;ctr++)
	{
		sum = sum + ctr;
	}
	cout<<"Sum: "<<sum;
	
	
	return 0;
}
