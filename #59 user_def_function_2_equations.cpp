/* Write a C++ program that gets 3 numbers from the
user & calculate the results of the given equations
by using the following user-defined functions.
Function for a) => double y(int x, int y);
Function for b) => double f(int x, int y, int z);
Equations:
a) y = 2 x raised to y + y squared
b) f = ze raised to x ln (x/y) upon loge (2y)/z
*/

#include <iostream>
#include <cmath>
using namespace std;

double y2(int x, int y);
double f(int x, int y, int z);

int main()
{
	int x,y,z;
	cout<<"Please enter the value of x: ";
	cin>>x;
	cout<<"Please enter the value of y: ";
	cin>>y;
	cout<<"Please enter the value of z: ";
	cin>>z;
	cout<<"y = "<<y2(x,y)<<endl;
	cout<<"f = "<<f(x,y,z)<<endl;

	return 0;
}

double y2(int x, int y)
{
	return(2*pow(x,y)+sqrt(y));
}

double f(int x, int y, int z)
{
	return(z*exp(x)*log(x/y)/(log10(exp(2*y/z))));
}
