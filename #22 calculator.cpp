/* Q)Write a C++ program that performs the operations of a
standard calculator (+,-,*,/,%). The user should enter two
operands and an arithmetic operator. According to these inputs,
the result of the operation should be displayed on the screen. */

#include<iostream>
using namespace std;

int main()
{
	int num1, num2;
	char op; /* op stands for operator, eg: +,-,etc. */
	
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter operator(+,-,*,/,%): ";
	cin>>op;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	
	switch(op)
	{
		case '+':
				cout<<num1<<op<<num2<<" = "<<num1+num2;
				break;
			
		case '-':
				cout<<num1<<op<<num2<<" = "<<num1-num2;
				break;
			
		case '*':
				cout<<num1<<op<<num2<<" = "<<num1*num2;
				break;
					
		case '/':
				cout<<num1<<op<<num2<<" = "<<num1/num2;
				break;

		case '%':
				cout<<num1<<op<<num2<<" = "<<num1%num2;
				break;
		default:
			cout<<"Wrong Choice";
	}

	
	return 0;
}
