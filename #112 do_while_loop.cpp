//do while

#include<iostream>
using namespace std;

int main()
{
    int x=300;

/*
//classic while
    while(x>=555) //won't execute anything
    {
        cout<<x<<endl;
        x++;
    }
*/

/* Will execute at least once even when the
condition is not met. */
    do
    {
        cout<<x<<endl<<endl;
        x++;

    }while(x>=555);

    return 0;
}
