/* Q)Write a C++ code which displays the
following numbers: 0,3,6,9,12,...N
by assuming N will be entered by the user.
(Hint: Use while loop). */

#include<iostream>
using namespace std;

int main()
{
	int counter=0, N;
	
	cout<<"Enter N: ";
	cin>>N;
	
	while(counter<=N)
	{
		cout<<counter<<endl;
		counter+=3; // or use: counter=counter+3
	}
	
	return 0;
}


// 2nd Solution
/*
#include<iostream>
using namespace std;

int main()
{
	int N;
	
	cout<<"Enter N: ";
	cin>>N;
	
	for(int counter=0; counter<=N; counter+=3)
	{
		cout<<counter<<endl;
	}
	
	return 0;
}
*/
