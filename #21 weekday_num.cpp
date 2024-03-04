/* Q)Write a C++ program that would get a number
from the user in between 1 and 7. Having done so,
the program would associate the number with a day
of the week which would be displayed as the output. 
The associations are given below:
1-Monday  2-Tuesday  3-Wednesday  4-Thursday
5-Friday  6-Saturday  7-Sunday */

#include<iostream>
using namespace std;

int main()
{
	int weekday;
	
	cout<<"Enter weekday's number: ";
	cin>>weekday;

	switch(weekday)
	{
		case 1:
			cout<<"Monday";
			break;
			
		case 2:
			cout<<"Tuesday";
			break;
			
		case 3:
			cout<<"Wednesday";
			break;
					
		case 4:
			cout<<"Thursday";
			break;

		case 5:
			cout<<"Friday";
			break;
				
		case 6:
			cout<<"Saturday";
			break;
				
		case 7:
			cout<<"Sunday";
			break;

		default:
			cout<<"Invalid Choice";		
	}
	
	
	return 0;
}
