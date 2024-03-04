/* Wrire a C/C++ code which calculates the factorial
of an entered number (n!) using recursive function. */

#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n<=1) //base case, when reached iterations stop
		return n; //final return value
	else
		return(n * factorial(n-1));	
}

int main()
{
	int n, fac=0;
	
	cout<<"Enter the value for n: ";
	cin>>n;
	
	fac = factorial(n);
	
	cout<<n<<"! = "<<fac;
	
	return 0;
}
