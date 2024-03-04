// Type of user-defined function

#include<iostream>
using namespace std;

/* The funtion type is very important.
For our case here, the function won't
display the result accurately bcz the int
datatype ignores the decimal point and the
numbers after it. */
int jack(float a, float b)
{
    return a+b;
}

float peter(int x, int y)
{
    return x+y;
}

int main()
{
    cout<<jack(2.2,4.2)<<endl;
    //output is just 6 not 6.4
    //bcz func. type is int

    cout<<peter(2.2,4.2)<<endl;
    //output is just 6 not 6.4
    //bcz number type is int

}
