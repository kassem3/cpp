/* Q)Write a C++ code to prompt the user to
input the distance in kilometer per hour and
calculate the equivalent miles per hour.
(Hint: 1 km/hr = 0.6213712 mi/hr) */

#include<iostream>
using namespace std;

int main()
{
	int distance;
	double result;
	
	cout<<"Enter the distance in kilometer: ";
	cin>>distance;
	
	result = distance*0.6213712;
	
	cout<<"The miles per hour of "
	<<distance<<" km/hr is= "<<result<<" mi/hr";
	// can continue on the next line
	
	return 0;
}
