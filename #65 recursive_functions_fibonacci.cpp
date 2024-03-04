/* Wrire a C/C++ code which displays the Fibonacci
numbers up to n number of series using the recursion
approach where n is taken from the user. */


#include<iostream>
using namespace std;

int fib(int n)
{
	if(n==1||n==0)	// can also use (n==0||n==1)
		return n;
	else
		return(fib(n-1)+fib(n-2));
		
}

int main()
{
	int n, fibonacci;
	
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	
//	fibonacci = fib(n);
	
	for(int i=0; i<=n; i++)
		cout<<"  "<<fib(n);
	
	return 0;
}

