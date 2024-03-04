// IF Project-1
/* Create a C++ program that checks whether
an integer is positive, negative or zero. */

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter an integer:";
    cin>>num;
    
    if(num>=1)
        cout<<"The integer is positive";
    
    else if(num<=-1)
        cout<<"The integer is negative";

    else if(num==0)
        cout<<"The integer is zero";


    return 0;
}
