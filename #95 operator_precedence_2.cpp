// Operator Precedence 2

#include <iostream>
using namespace std;

int main()
{
	cout<< (3+1-3)*1/2%2 <<endl;
	// 1 *1/2%2
	// 1 /2%2
	// NOTE: 1/2 = 0.5 but the compiler uses integers so: 0
	// 0%2
	// = 0
	
	cout<< 3*2/6+5%5 <<endl;
	// 6 /6+5%5
	// 1 +5%5
	// 1+ 0
	// = 1
	
	
	return 0;
}

