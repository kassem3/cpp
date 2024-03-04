// VOID function

#include<iostream>
using namespace std;

/* void function cannot
use a return value. It
can only have cout unlike
non-void functions which
can use both return & cout. */
void peter(int x, int y)
{
    //return x+y;
    cout<<"x+y = "<<x+y<<endl;
}

int main()
{
    //cout<<peter(5,3)<<endl;
/*cout would cause an error & can't
be used with void functions. */
    
    peter(5,3);

    return 0;
}

//ERROR situation
/* Programmer entered values
while the function doesn't have
any parameters inside it. */

/*
void greet()
{
    cout<<"Welcome user"<<endl;
}

int main()
{
    greet(3,4)
    
    return 0;
}
*/
