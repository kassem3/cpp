/* Q)Write a compelete C++ code to ask the user to input
any number. Display "Zero" if the number is equal to zero
and display "Negative" if the number is less than zero
and display "Positive" if the number is greater than zero.
(Hint: Use ternary operator). */

#include<iostream>
using namespace std;

int main()
{
	int num;
	string result;
    /* NOTE: We can't store the result in a string
    variable if the result was a number. */
	
	cout<<"Enter any number: ";
	cin>>num;
	
	result = (num==0)?"Zero":((num>0)?"Positive":"Negative");
	cout<<"Your number is "<<result;


	return 0;
}


// Classic Solution
/*
#include <iostream>
using namespace std;

int main() {
    int num;
    string result;
    
    cout << "Enter any number: ";
    cin >> num;
    
    if (num == 0) {
        result = "Zero";
    } else if (num < 0) {
        result = "Negative";
    } else {
        result = "Positive";
    }
    
    cout << "The entered number is " << result << endl;
    
    return 0;
}
*/
