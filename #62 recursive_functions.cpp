/* Wrire a C++ code which calculates and displays the summation
of the first n numbers by using recursive functions. Note that,
n will be entered by the user. */

#include<iostream>
using namespace std;

int summation(int n)	// The recursive function method
{
	if(n<=1)
		return n;
	else
		return(n + summation(n-1));
}

int main()
{
	int n, sum=0;	// initializing sum as 0 is very important
	
	cout<<"Enter the value for n: ";
	cin>>n;
	
	sum = summation(n);
	
	cout<<"Summation = "<<sum;
	
	return 0;
}

/*
// The for loop function method
int main()
{
	int n, sum=0;
	
	cout<<"Enter the value for n: ";
	cin>>n;
	
	for(int i=1; i<=n; i++)
		sum += i;			//sum = sum+i;
		
	cout<<"Summation = "<<sum;
	
	return 0;
}
*/
