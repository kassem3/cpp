/* Q)Write a C++ code to prompt the user to input his/her
age and calculate when the year the user was born */


#include<iostream>
using namespace std;

int main()
{
	int age, year;
	
	cout<<"Please enter your age: ";
	cin>>age;
	
	year = 2022-age;
	
	cout<<"Your year of birth is = "<<year;
	
	return 0;
}

