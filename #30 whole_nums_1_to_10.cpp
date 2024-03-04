/* Q)Write a C++ program that displays the total
product of all whole numbers in between 1 and 10.
Solve this question using either a for or a while loop.
(Hint: Output should be 362880) */

#include<iostream>
using namespace std;

//for loop method
int main()
{
	int product=1;
	
	for(int num=2; num<=9; num++) //can also be num<10;
	{
		product=product*num; //can also be product*=num;
	}
	cout<<"Product is: "<<product;

	return 0;
}

/*
//while loop method
int main()
{
	int product= 1;
    int num= 2; //Initialize num before the loop

    while (num<=9) //Check if num is less than or equal to 9
	{
		product*=num;
		num++;
	}
	cout<<"Product of all whole no.s b/w 1 and 10: "<<product;

	return 0;
}
*/
