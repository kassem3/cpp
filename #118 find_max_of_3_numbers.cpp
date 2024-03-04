/*Q) Create a C++ program that finds the
maximum number between 3 numbers using a
user-defined function or if statement. */
#include<iostream>
using namespace std;

//using user-defined function
int fmax(int n1, int n2, int n3)
{
    if (n1>n2 && n1>n3)
        return n1;
    else if (n2>n1 && n2>n3)
        return n2;
    else
        return n3;
}

int main()
{
    //this won't display the output
    //fmax(1,8,5);
    cout<<fmax(1,8,5);

    return 0;
}

//using if statement
/*
int main()
{
    int n1, n2, n3;
    cout<<"Enter 3 numbers: "<<endl;
    cin>>n1>>n2>>n3;

    if((n1>n2)&&(n1>n3))
    {
        cout<<n1<<" is the maximum"<<endl;
    }
    else if((n2>n1)&&(n2>n3))
    {
        cout<<n2<<" is the maximum"<<endl;
    }
    else
    {
        cout<<n3<<" is the maximum"<<endl;
    }

    return 0;
}
*/
