/* Q)Write a C++ code which displays the
numbers from 1 to 6 using while loop. */

#include<iostream>
using namespace std;

int main()
{
	int ctr=1; //short form of counter

	while(ctr<7) //same as: while(counter<=6)
	{
		cout<<ctr<<endl;
		ctr++; //counter=counter+1 #update
	}
	
	return 0;
}


// 2nd Solution
/*
#include<iostream>
using namespace std;

int main()
{
	for(int i=1; i<=6; i++)
	{
		cout<<i<<endl;
	}
	
	return 0;
}
*/
