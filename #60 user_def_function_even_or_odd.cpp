/* Write a C++ program that gets a number from the user
and checks if the number is an odd number or an even number by
using the following user-defined function. Then if the number
is even, display a message as "The given number is even".
Else, display the message as "The given number is odd".
Function: int isEven(int number);	(I'll just use num)
*/

#include <iostream>
#include <cmath>
using namespace std;

int isEven(int x);
//could've initialized (int num) or anything else 

int main()
{
	int num;
	cout<<"Please enter a number: ";
	cin>>num;
	
	if(isEven(num)==0)
		cout<<"The given number is even";
	else
		cout<<"The given number is odd";
	
	return 0;
}


int isEven(int num)
{
	return(num%2);
}
