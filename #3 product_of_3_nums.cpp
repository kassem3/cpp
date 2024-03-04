/* Q)Write a compelete C++ code which gets three
integer numbers from the user, then calculates
and displays their product. */


#include<iostream>
using namespace std;

int main()
{
	int n1, n2, n3;
	float product;
	
	cout<<"Enter three numbers: ";
	cin>>n1>>n2>>n3;
	
	product = (n1*n2*n3);
	
	cout<<"Product of the numbers = "<<product;
	
	return 0;
}
