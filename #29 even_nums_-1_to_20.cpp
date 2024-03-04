/* Q)Write a C++ program that displays
all even numbers between -1 and 20.
Solve this question using for loop. */

#include<iostream>
using namespace std;

int main()
{
	for (int num=-1; num<20; num++)
	{
		if(num%2==0)
		{
			cout<<num<<", ";
		}
	}

	return 0;
}
