// User Defined Functions
/* Write a C++ program that takes the ages of the
10 students in the function called "void totalAges()"
and displays the total. */

#include <iostream>
#include <cmath>
using namespace std;

void totalAges()
{
	int age, totalAges;	//better initialize totalAges value as 0
	
	for(int i=1; i<=10; i++)
	{
		cout<<"Please Enter Student "<<i<<" age: ";
		cin>>age;
		totalAges+=age;   //Same as totalAges = totalAges + age;
	}
	cout<<"Total age is: "<<totalAges;
}

int main()
{
	totalAges();
	
	return 0;
}
