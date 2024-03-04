/* Write a C++ program to calculate & display the sum
of digits of a given number using recursion.
Example: 256 is 2+5+6 so the sum of digits will be 7 */


#include <iostream>
using namespace std;

int sum_digits(int num)
{
	if(num==0)
		return 0;
	return(num%10+sum_digits(num/10));
}

int main()
{
	int number;
	cout<<"Please enter a number: ";
	cin>>number;
	cout<<"Sum of digits: "<<sum_digits(number);
	
	
	return 0;
}

