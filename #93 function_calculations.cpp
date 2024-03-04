// FUNCTION CALCULATIONS

#include <iostream>
using namespace std;

int main()
{
	int x=1;
	
	//REMEMBER: func. -> operator sign -> equality sign -> num.
	
	x+=5;		//same as: x= x+5	OR: x=6
				//value updated & stored in memory
				
	cout<<x<<endl; //6
	
	
	//NOTE: Calculations can be used directly with cout object.
	
	int y=10;
//	cout<<y*=5<<endl; //error bcz calculations must be put in
					  //rounded brackets.
	cout<<(y*=5)<<endl; //10*5 = 50
	
	//Same concept used with the other operators.
	
	return 0;
}

