/* Q)Display all the numbers between
10 and 50 which are divisible by 9
using for-Loop. */

#include<iostream>
using namespace std;
int main()
{
	int cnt=10;
	
	for(int cnt=10;cnt<=50;cnt++)
	{
		if(cnt%9==0)
		{
			cout<<cnt<<endl;
		}
	}

	return 0;
}
