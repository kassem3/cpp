#include<iostream>
#include<cmath>
using namespace std;

int power(int baseNum, int powNum) //assume that powNum handles only positive nums
{
	int result=1;

	for(int i=0; i<powNum; i++)
	{
		result=result*baseNum;
	}
	
	return result;
}


int main()
{
	cout<<"The power is = "<<power(4,3);
	
	return 0;
}

