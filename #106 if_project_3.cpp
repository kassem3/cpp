// IF Project-3
/* Create a C++ program that checks
whether the positive integer entered
by the user is even or odd. */

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a positive integer:";
    cin>>num;
    
    if(num>0) /* if it was (num!=0), the
    program would work with negative numbers
    too. */
    {
        if(num%2==0)
        cout<<"Your number is even";
        else
        cout<<"Your number is odd";
    }
    else
    {
        cout<<"Please enter a POSITIVE integer!";
    }


    return 0;
}
