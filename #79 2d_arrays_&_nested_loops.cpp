// 2 Dimensional Arrays and Nested Loops

#include <iostream>
using namespace std;

int main()
{
	//2D ARRAYS (same concept with nD arrays)
	int numberGrid[3][2] = {	/*We used two square
								brackets bcz it's a 2D array.
								It's very important to specify
								the no.s in brackets especially
								with 2D arrays. The 1st bracket
								is the total no. of elements in
								the numberGrid array & the 2nd
								bracket is the no. of elements
								inside each array-element.*/
							{1,2} ,
							{3,4} ,
							{5,6}
							};

/*	
	cout<<numberGrid[0][1]<<endl; //display 2
	cout<<numberGrid[2][0];       //display 5
*/	

	//NESTED for LOOPS
	for(int i=0; i<3; i++)	//We used 3 bcz we want this for_loop 
	{						//to loop through all of the individual 
							//elements in the array.*/
							
		for(int j=0; j<2; j++)		//We used 2 bcz this is the index no. of
		{							//elements inside each of the elements
			cout<<numberGrid[i][j];	//of the numberGrid array.
									
		}
		cout<<endl;
	}
	
	return 0;
}

