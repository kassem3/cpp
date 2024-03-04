/* Write a Program that takes 2 numbers
from user then adds them using pointers */

#include <iostream>
using namespace std;

void sum2(int *a, int *b)
{
    cout<<"Sum of 2 numbers: "<<((*a)+(*b));
}

int main()
{
    int num1,num2;

    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;

    sum2(&num1, &num2);

    return 0;
}
