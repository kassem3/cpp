/* Q)Write a compelete C++ code which gets two integer numbers
from the user, then calculates and displays their summation */


#include<iostream>
using namespace std;

int main()
{
	int n1, n2, sum;
	
	cout<<"Enter 1st number: ";
	cin>>n1;
	cout<<"Enter 2nd number: ";
	cin>>n2;
	
/* Always keep the calculation on the Right side */
	sum = n1+n2;
	cout<<"Summation = "<<sum;
	
	
	return 0; //no code will be read after return func.
}
