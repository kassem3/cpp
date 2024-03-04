/* Q)Write a C++ code to prompt the user to input
the radius of a sphere then calculate the volume
of the sphere according to the formula given below:
Formula: V = 4/3 x Pie x r(cube) */

#include<iostream>
using namespace std;

int main()
{
	double radius, result;
	
	cout<<"Please enter the radius of the sphere: ";
	cin>>radius;
	
	result = ((4/3)*(22/7)*(radius*radius*radius));
	
	cout<<"The volume of the sphere is: "<<result;
	
	return 0;
}
