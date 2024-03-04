//NEEDS FIX!

/* Write a Program that takes 5 nums from the user,
stores them in an array then adds them & displays
the result using pointers */

#include<iostream>
using namespace std;

int main()
{
    int arr[5],sum=0, i;

    int *ptr = arr;

    cout<<"Please enter 5 numbers: "<<endl;

    for(i=0; i<5; i++)
        cin>>arr[i];

    for(i=0; i<5; i++)
    {
        sum= sum + (*ptr + i);
    }

    cout<<"Sum of all numbers= "<<sum<<endl;
    return 0;
}
