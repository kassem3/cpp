/* Q) Nested loop Asterisk Mirror. */

#include<iostream>
using namespace std;

int main()
{
	
	for (int i=1; i<=6; i++) //i=row
	{
		for (int j=6; j>=i; j--) //j=column
			cout<<"*";
			
		cout<<endl;
	}


	for (int i=6; i>=1; i--) //i=row
	{
		for (int j=6; j>=i; j--) //j=column
			cout<<"*";
			
		cout<<endl;
	}	

	return 0;
}
