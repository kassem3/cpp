// User Defined Functions
/* Write a C++ program that gets a number from the user.
According to given number, the program should calculate
& display the multiplication table of the given number
from 0 to 9 in the function "void multTable()" */

#include <iostream>
#include <cmath>
using namespace std;

void multTable()
{
	int num;
	
	cout<<"Please enter a number: ";
	cin>>num;
	
	int i=0;
	while(i<10)
	{
		cout<<num<<" x "<<i<<" = "<<num*i<<endl;
		i++;
	}
}

int main()
{
	multTable();
	
	return 0;
}
