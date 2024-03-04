/* Q) Nested loop Asterisk. */

#include<iostream>
using namespace std;

int main()
{
	for(int i=1; i<=10; i++) //i=row
	{
		for(int j=10; j>=i; j--) //j=column
			cout<<" * ";
			
		cout<<endl;
	}
	
	return 0;
}
