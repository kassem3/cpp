/* Q) Trace the following code & write the output. */
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[20]="university", b[20]="course";
    int x, y;
    
    cout<<a<<" "<<b<<endl; //university course

    strcpy(a,b);
    cout<<a<<" "<<b<<endl; //course course

    strncat(a,b,3);
    cout<<a<<" "<<b<<endl; //coursecou course

    x= strlen(a);
    y= strcmp(b,a);
// for strcmp(b,a) case, if (b<a) -> -1 , (b>a) -> 1 , (b=a) -> 0

// in case of strcmp(a,b), if (a<b) -> -1, (a>b) -> 1, (a=b) -> 0

    cout<<x<<" "<<y; //9 -1

    return 0;
}
