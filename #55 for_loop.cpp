/* A for loop can do the same job as while
loop but with much less lines of code. */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	for(int i=1; i<=5; i++) /* i stands for index. In brackets we type: declaration,
							loop condition, code to execute after every iteration.
							After each semicolon you can type a new line of code.
							Could also be (int i=0; i<5; i++) */
	{
		cout<<i<<endl;
	}
	
	return 0;
}
