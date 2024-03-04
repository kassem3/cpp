//while loop

#include<iostream>
using namespace std;

int main()
{
    int i=1;

    while(i<=10)
    {
        cout<<"No. of iteration: "<<i<<endl;
        i++;
/* NOTE: It is always preferred to write the
incrementation[i++] at the end eventhough it
would work just fine if it was at the beginning
but that would make it count incorrectly. For
our case here, it would count & display from 2
till 11 eventhough it would iterate 10 times. */
    }

    return 0;
}
