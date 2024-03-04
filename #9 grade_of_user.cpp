/* Q)Write a C++ code to prompt the user to
input his/her grade and display "Passed" if
his/her grade is equal to or more than 60,
otherwise display "Failed". Also display
"Invalid Grade" if the user enters a number
less than 0 or greater than 100. */

#include<iostream>
using namespace std;

int main()
{
	int grade;
	
	cout<<"Enter your grade: ";
	cin>>grade;
	
	if(grade<0 or grade>100)
    {
        cout<<"Invalid Grade";
    }
	else if(grade>=60)
    {
        cout<<"Passed";
    }
	else cout<<"Failed";
/* NOTE: the output can be on the
same line too but I don't recommend
it. Also better to add curly brackets.*/
	
	
	return 0;
}
