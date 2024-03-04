/* Q)Write a C++ code which displays
the average of numbers from 1 to 6. */

#include<iostream>
using namespace std;

int main()
{
	int counter=1, sum=0;
	float avg;
	
	while(counter<=6)
	{
		sum = sum + counter;
		counter++;
	}
	
	//Without (float), answer would've been 3 which is inaccurate
	avg = (float)sum/6;
	cout<<"Average: "<<avg;
	
	
	return 0;
}

// ChatGPT Note:
/*
When performing integer division in C++, the result is always an
integer, and any fractional part of the result is truncated. For
example, 5 / 2 would result in 2, not 2.5.

In the code you provided, if you remove (float) from the expression
(float)sum / 6, then integer division will be performed, and the
result will be truncated to an integer. This means that if sum is
less than 6, then the result of the division will be 0, which will
lead to an incorrect average value.

So, in this specific context, I would say that removing (float) can
make the program produce an inaccurate result, particularly if the sum
of the numbers is less than the divisor.
*/
