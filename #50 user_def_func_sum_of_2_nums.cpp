/* Write a complete C++ code using user-defined functions in which the
function performs the summation of 2 numbers entered by the user. */

#include<iostream>
#include<cmath>
using namespace std;


void summation(); //Prototype must be declared otherwise there will be an error

//If the main function is at the end, no need to declare any prototypes

int main()
{
	summation();
	
	return 0;
}


void summation()
{
	int n1, n2, sum;
	//Initializing the value of sum as 0 is a good practice to avoid problems
	
	cout<<"Enter 2 numbers: "<<endl;
	cin>>n1>>n2;
	
	sum=n1+n2;
	
	cout<<"Sum = "<<sum;	
}
