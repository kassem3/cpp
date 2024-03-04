/* Q) Write a C++ Program that displays the
multiplication table of 1 to 4 using nested loop. */

#include<iostream>
using namespace std;
int main()
{
	
	for(int i=1; i<=4; i++) //i=row
	{
		for(int j=1; j<=10; j++) //j=column
			cout<<i*j<<"\t";
			
		cout<<endl;
	}


	return 0;
}
