#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int nums[]={2,6,15,24,33,49};
	
	cout<<nums[0]<<endl; //2 has the index num 0 so output is 2
	
	nums[0]= 99; //to update the 1st element in the array
	
	cout<<nums[0]<<endl; //99
	
	return 0;
}
