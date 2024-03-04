/* Q)Write a compelete C++ code to prompt the
user to input his/her grade and display the
result as "Passed" if his/her grade is equal
to or more than 50, otherwise display "Failed". */

#include<iostream>
using namespace std;

int main()
{
	int grade;
	string result;
	
	cout<<"Enter your grade: ";
	cin>>grade;
	
	result = (grade>=50)?"Passed":"Failed";
	cout<<result;


	return 0;
}
