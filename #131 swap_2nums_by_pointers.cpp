/* Write a Program that takes 2 numbers
from user then swaps them using pointers */

#include <iostream>
using namespace std;

void swap2(int *a, int *b)
{
    int temp= *a;
    *a= *b;
    *b= temp;

}

int main()
{
    int num1,num2,temp;

    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;

    cout<<"Before swapping: "<<num1<<"\t"<<num2<<"\n";

    swap2(&num1, &num2);

    cout<<"After swapping: "<<num1<<"\t"<<num2;

    return 0;
}
