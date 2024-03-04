/* Wrire a C/C++ code which calculates the power of the
number using the recursion approach where the base and
exponent is taken as input by the user. */
//I'll use num for base

#include<iostream>
using namespace std;

int power(int num, int expn)
{
	if(expn==0)
		return num;
	else
		return(num * power(num,expn-1));
		
}

int main()
{
	int num, expn, pwr;	//where num=number, expn=exponent, pwr=power
	
	cout<<"Enter the values for the base & exponent: "<<endl;
	cin>>num>>expn;
	
	pwr = power(num,expn);
	
	cout<<"Result = "<<pwr;
	
	return 0;
}

