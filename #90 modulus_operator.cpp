// MODULUS OPERATOR
// Displays the remainder of a division in integer form.
// It has 3 cases:
// Case 1) Num % SameNum = 0
// Case 2) SmallNum % BigNum = SmallNum
// Case 3) BigNum % SmallNum = BigNum - SmallNum (n possible times)

#include<iostream>
using namespace std;

int main()
{
	// Case 1)
	cout<<7%7<<endl;	//0
	
	// Case 2)
	cout<<4%7<<endl;	//4
	
	// Case 3)
	cout<<9%2<<endl;	//1
	
	cout<<20%3;			//2
	
	return 0;
}

