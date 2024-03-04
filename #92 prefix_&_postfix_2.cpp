//PREFIX & POSTFIX 2

#include <iostream>
using namespace std;

int main()
{
	int x=4;
	int y=10;
	
	cout<<x+3<<endl;	// 4 + 3 = 7 (not stored)
	
	cout<<x<<endl;		// 4
	
	cout<<y++<<endl;	/* 10 (11 is stored) the compiler only reads
						the funct. then displays it  then reads ++
						then update the value in the memory only. */
						
	cout<<++y<<endl;	// "+1" + 11 = 12
	
	cout<<++x<<endl;	// "+1" + 4 = 5
	
	cout<<x<<endl;		// 5
	
	cout<<x++<<endl;	// 5 (6 is stored)
	
	cout<<y+x<<endl;	// 12 + 6 = 18
	
	cout<<y<<endl;		// 12
	
	cout<<x<<endl;		// 6

	return 0;
}

