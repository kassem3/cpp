/* Q)Write a compelete C/C++ code which gets
length and width of a rectangle from the user,
then calculates and displays the area of the rectangle. */

#include<iostream>
using namespace std;

int main()
{
	int l, w;
	float area;
	
	cout<<"Enter the length of the rectangle: ";
	cin>>l;
	cout<<"Enter the width of the rectangle: ";
	cin>>w;
	
	area = l*w;
	// better to use round brackets for calculations
	
	cout<<"The area of the rectangle is: "<<area;
	
	return 0;
}
