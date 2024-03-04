/* Q)Write a C++ program that displays
all natural numbers from 10 to 1 in
reverse order. Solve this question
using while loop. */

#include<iostream>
using namespace std;

int main()
{
	int num=10;
	
	while(num>0) //or (num>=1)
	{	cout<<num<<", ";
		num--;
	}

	return 0;
}
