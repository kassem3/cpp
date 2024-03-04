#include<iostream>
using namespace std;

int main()
{
    int a[6]= {7,5,8,8,3,10};
    cout<<a[4]<<endl;

    a[4]= 10;
    cout<<a[4]<<endl;

    const int b[3]= {84,93,50};
    cout<<b[2]<<endl;

//    b[2]= 99; //error


    return 0;
}
