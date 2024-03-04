/* Write a C++ program to count the digits of a given number
using recursion.
Test Data: Input a number: 50
Expected output: The number of digits in the number is: 2 */


#include <iostream>
using namespace std;

int count_digits(long long int num) //long long int is limited
{
	if(num<10)
		return 1;
	else
		return(1+count_digits(num/10));
}

int main()
{
	long long int number;
	cout<<"Please enter a number: ";
	cin>>number;
	cout<<"Number of digits in the number is: "<<count_digits(number);
	
	return 0;
}

