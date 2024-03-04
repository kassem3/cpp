// Summation user-defined function

#include<iostream>
using namespace std;

//function parameters
int sum(int x , int y)
/* Note: int x, y would'nt
work unlike functions bcz
these are parameters. */
{
//    x+y;
//    return x+y;

    //shortcut
    return x+y;
}

int main()
{
    cout<<sum(2 , 5);

    return 0;
}
