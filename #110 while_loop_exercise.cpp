//while loop Exercise
/* Q)Write a C++ program that finds the sum of
positive numbers. If the user enters a negative
number, the loop ends. The negative number is
not added to the sum. */

#include<iostream>
using namespace std;

int main()
{
    int num=0;
    int sum=0; //very important intialization

    //take no. from user
    cout<<"Enter a number: ";
    cin>>num;

    while(num>0)
    {
        sum = sum+num; //or sum+=num;

//take no. from user again IF no. is positive
        cout<<"Enter a number: ";
        cin>>num;
    }

    cout<<"Sum of numbers: "<<sum<<endl;

    return 0;
}
