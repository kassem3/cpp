#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int multi[9][9];
	
	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
		
			multi[i][j] = (i+1)*(j+1);
			cout<<multi[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}

