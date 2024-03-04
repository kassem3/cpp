// POINTERS 2
/* A pointer is an address of another variable.
A pointer variable is a variable that stores the address.
A * operator is used for declaring a
pointer variable & for dereferencing. */

#include <iostream>
using namespace std;

int main()
{
	int score=33;
	int *pScore = &score; // *pScore is a pointer variable
	// MUST add * before any pointer variable
	
	double gpa=3.8;
	double *pGpa= &gpa; // MUST be same datatype as the variable
/*
NOTE: Rule: Can't create 2 variables having same names in the same scope.
The rule applies even when one variable is a pointer & the other is not.
	int x; // This declares a variable 'x' of type int
    int *x; // This will cause a compilation error - redeclaration of 'x'
*/

	string name="John";
	string *pName= &name;
	
	cout<<&name<<endl; // address of name

	cout<<pName<<endl; // address of name
	
	cout<<*pName<<endl; // John, This is dereferencing
						// (Value inside the stored address)

	cout<<*&name<<endl; // John, Another way of dereferencing
	
	cout<<&*&name<<endl; // address now!
	
	
	return 0;
}
