/* Q)Write a compelete C++ code to ask the user
to input any number. Display "It is zero" if the
number is equal to zero and display "It is negative"
if the number is less than zero and display "It is
positive" if the number is greater than zero. */

#include<iostream>
using namespace std;

int main()
{
	int num;
	
	cout<<"Enter any number: ";
	cin>>num;

	if(num==0)
	{
		cout<<"It is zero";
	}
	else if(num>0)
	{
		cout<<"It is positive";
	}
	else
	{
		cout<<"It is negative";
	}


	return 0;
}
