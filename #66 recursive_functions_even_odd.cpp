/* Write a C++ program to print even or odd
numbers in given range using recursion.
Test Data: Input the range to print starting
from 1:10 */


#include <iostream>
using namespace std;

void even(int start, int stop)
{
	if(start>stop)
		return;
	if(start%2==0)
	cout<<start<<" ";
	even(start+1, stop);
}

void odd(int start, int stop)
{
	if(start>stop)
		return;
	if(start%2==1)
	cout<<start<<" ";
	odd(start+1, stop);
}

int main()
{
	int start, stop;
	cout<<"Please enter start number: ";
	cin>>start;
	cout<<"Please enter stop number: ";
	cin>>stop;
	
	cout<<"Even numbers are: ";
	even(start, stop);
	cout<<"\nOdd numbers are: ";
	odd(start, stop);
	
	return 0;
}

