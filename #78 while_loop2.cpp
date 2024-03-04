#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int c=1, num=1, sum=0;
	while(c<=3)
	{
		cout<<"Enter a number: ";
		cin>>num;
		sum=sum+num;
		c++;
	}
	
	cout<<"The sum is: "<<sum<<endl;
	
	return 0;
}

