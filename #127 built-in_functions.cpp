//Built-in Functions

#include<iostream>
#include<cmath> //cmath library

using namespace std;
int main()
{
	double x,y,z;	

	cout<<"Enter Values: "<<endl;
	cin>>z>>x;
	
	y = exp(z) + sqrt(x) / pow(10,z);
	
	cout<<endl<<"y = "<<y;

	return 0;
}
