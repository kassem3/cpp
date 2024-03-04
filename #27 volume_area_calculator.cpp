/* Q)Assume that you are asked to write a program for math students in order to
demonstrate how to calculate volume and area of specific 3D geometric shapes.
Write a complete C++ program that offers a menu to the user and get relevant data
according to the selected shape. Having done so, the program would calculate
either the volume or area of the selected shape and display this as the output.
Hint: You can solve this question using if/else statement OR a switch case. */

#include<iostream>
using namespace std;

int main()
{
	int choice, volume, area, radius, height;
	double PI=3.142;
	
	cout<<"1- Calculate Volume of Cube"<<endl;
	cout<<"2- Calculate Area of Sphere"<<endl;
	cout<<"3- Calculate Area of Cylinder"<<endl;
	cout<<"Select a choice [1-3]: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
				cout<<"\n----------Volume of Cube----------\n";
				cout<<"Enter the area of the Cube: ";
				cin>>area;
				volume=area*area*area;
				cout<<"Volume of the Cube is: "<<volume;
				break;
			
		case 2:
				cout<<"\n----------Area of Sphere----------\n";
				cout<<"Enter the radius of the Sphere: ";
				cin>>radius;
				area=4*PI*radius*radius;
				cout<<"Area of the Sphere is: "<<area;	
				break;
			
		case 3:
				cout<<"\n----------Area of Cylinder----------\n";
				cout<<"Enter the radius of the Cylinder: ";
				cin>>radius;
				cout<<"Enter the height of the Cylinder: ";
				cin>>height;
				area=(2*PI*radius*height)+(2*radius*radius);
				cout<<"Area of the Cylinder is: "<<area;
				break;
		default:
				cout<<choice<<"Your choice isn't in the menu Dummy";
				break;
	}

	
	return 0;
}
