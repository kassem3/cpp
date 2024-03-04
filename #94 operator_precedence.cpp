// Operator Precedence\Order of Operations\Calculation Priority

/*
Priorities from Most Significant to Least Significant:
1) ()	[rounded brackets]
2) * , / , %	[multiplication , divison , modulus]
3) + , -	[additon, subtraction]
4) = [equal]	last calculation always
NOTE: If operators have equal significance, solve from left to right.
*/


#include <iostream>
using namespace std;

int main()
{
	cout<<2+(5*2)-1<<endl;	//2+ 10 -1 = 11
	
	cout<<1+2-3+4<<endl;	//solve from left to right: 4

	cout<<1*2+3-4/2<<endl;	//solve mult. -> div. -> rest
							//left to right: 2 +3 -2 = 1
							
	cout<<2+2/2*(3-4)%5<<endl;
	
	// STEPS:
	// (3-4) becomes -1
	// +2/2 becomes 1
	// 1*-1 becomes -1
	// -1%5 becomes -1
	// 2+ -1 becomes 2 - 1
	
	// IMPLEMENTATION:
	// 2+2/2*(3-4)%5
	// 2+2/2*-1%5
	// 2+1*-1%5
	// 2+ -1%5
	// 2+ -1
	// 2-1
	// = 1
	
	
	return 0;
}

