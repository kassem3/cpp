/* Q)Write a C++ program to get cost price and
selling price of a product. According to given
inputs, calculate total profit. If total profit
is less than 0 display "Loss" otherwise display
"Profit". */

#include<iostream>
using namespace std;

int main()
{
	int cost_pr, selling_pr, profit;
		
	cout<<"Enter the Cost price of the product: ";
	cin>>cost_pr;
	
	cout<<"Enter the Selling price of the product: ";
	cin>>selling_pr;

	profit = selling_pr - cost_pr;
	
	if(profit<0)
		cout<<"Loss!";
	else
		cout<<"Profit!";
	
	
	return 0;
}

/* We could also display the amount of profit or loss.
Also if the profit was equal to 0, we could display
"Breaking even". */
