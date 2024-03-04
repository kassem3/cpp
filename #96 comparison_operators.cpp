// COMPARISON operators
/*
less than (<)
greater than (>)
equal to (==)
less than OR equal to (<=)
greater than OR equal to (>=)
and (&&)
OR (||)
NOT equal to (!=)
*/

#include <iostream>
using namespace std;

int main()
{
	int x=2;
	int y=7;

	cout<<(x>y)<<endl; /* This is just a question to
	the computer. NOTE: Comparisons must be in
	rounded brackets to prevent errors. */
	/* Output will be 0 (false) since x is not greater
	than y. If x was greater than y, output would've
	been 1 which means (true). */

	cout<<(x=10)<<endl; /* This isn't a question! This
	is an assignment, the output will be 10 not 0
	(false) as some might think. */

	cout<<(x==10)<<endl; /* This IS a question that
	means [Is x equal to 10?] Output should be 0 (false)
	BUT, since we assigned the value 10 to variable x,
	the output will be 1 (true). */

	
	return 0;
}
