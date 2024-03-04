// SWITCH

#include<iostream>
using namespace std;

int main()
{
//  int x=15;  //I'll use another way

    switch(int x=15)  //x is local variable
    {
        case 5:
            cout<<"x is five\n";
            break;
/* Without break, the compiler will continue
to read the next case block instead of exiting
the switch statement. */
        case 10:
            cout<<"x is ten\n";
            break;
        case 15:
            cout<<"x is fifteen\n";
            break;
        default:    //else alternative for SWITCH
            cout<<"invalid number\n";
    }
/* NOTE: if x was declared as a global variable
AND there was no break statements, the compiler
will execute all the cout/any other orders
and will display wrong output. */

    return 0;
}
