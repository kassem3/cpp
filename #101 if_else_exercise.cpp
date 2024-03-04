// IF and ELSE Exercise
/* NOTE: We can use ( if , else if , else)
without adding the curly brackets ( {} ) but
that only works when our instruction is written
in just one line of code. It is always recommended
to use curly brackets to avoid errors. */

#include <iostream>
using namespace std;

int main()
{
    int a=100;

    if(a==10)
        cout<<"value of 'a' is 10"<<endl;
    
    else if(a==20)
        cout<<"value of 'a' is 20"<<endl;
    
    else if(a==30)
        cout<<"value of 'a' is 30"<<endl;
    
    else
        cout<<"value of 'a' is invalid"<<endl;
    

    return 0;
}
