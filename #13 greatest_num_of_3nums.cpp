/* Q)Write a C++ code which gets 3 numbersfrom the user,
then calculates and displays the greatest one of them.
(Hint: Use ternary operator). */

#include<iostream>
using namespace std;

int main()
{
	/* The issue with my original code was that I was trying
	to store the result of the ternary operator in a string
	variable, which cannot hold integer values. I've corrected
	this by using an integer variable instead. */
	int n1, n2, n3, result;
	
	cout<<"Enter three numbers: ";
	cin>>n1>>n2>>n3;
	
	result = (n1>n2 && n1>n3)?n1:((n2>n1 && n2>n3)?n2:n3);
	
	cout<<result<<" is the greatest number";
	
	return 0;
}
