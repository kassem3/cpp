/* Q)Create a Fast Food
Menu using switch case. */

#include<iostream>
using namespace std;
int main()
{
	int num, cost;
	char choice;

	cout<<"***FAST FOOD MENU***"<<endl;
	cout<<"a- Fries($2)"<<endl;
	cout<<"b- Chicken Wrap($5)"<<endl;
	cout<<"c- Cheeseburger($10)"<<endl;
	cout<<"d- Pizza($15)"<<endl;
	
	cout<<"Select a choice [a-d]: ";
	cin>>choice;

	switch(choice)
	{
		case 'a':
			cout<<"How many Fries you want? ";
			cin>>num;
			cost = num*2;
			cout<<"Cost of your Fries is: $"<<cost;
			break;
			
		case 'b':
			cout<<"How many Chicken Wrap you want? ";
			cin>>num;
			cost = num*5;
			cout<<"Cost of your Chicken Wrap is: $"<<cost;
			break;
			
		case 'c':
			cout<<"How many Cheeseburger you want? ";
			cin>>num;
			cost = num*10;
			cout<<"Cost of your Cheeseburger is: $"<<cost;
			break;
		
		case 'd':
			cout<<"How many Pizza you want? ";
			cin>>num;
			cost = num*15;
			cout<<"Cost of your Pizza is: $"<<cost;
			break;
			
		default:
			cout<<"Invalid Choice";
	}
	
	
	return 0;
}
