/* Q) Create a user-defined fuction that takes 2 numbers then swaps them. Use
Call by Reference method. */

#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;

//Note: We must use '*' before the values x and y bcz 'temp' is a variable
//and we cannot store an address inside a variable[here, addresses of x and y].
    temp= *x;
    *x= *y;
    *y= temp;
    
    cout<<"Inside swap func: "<<"x is "<<*x<<"     y is "<<*y<<endl;
}

int main()
{
    int x= 3;
    int y= 9;
    cout<<"Before swap func: "<<"x is "<<x<<"     y is "<<y<<endl;

    swap(&x,&y);
    cout<<"After swap func: "<<"x is "<<x<<"     y is "<<y<<endl;


    return 0;
}
