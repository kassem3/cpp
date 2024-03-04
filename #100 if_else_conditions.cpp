// IF and ELSE conditions
/* NOTE: When using 'else', you cannot use a
condition or add brackets unlike 'else if'.
Also, using 'else' is optional and sometimes
you wouldn't need it. */

#include <iostream>
using namespace std;

int main()
{
    int a=100, z=50;

    if(a==100)
    {
        cout<<"Excellent\n"<<endl;
    }
    else if(a==75)
    {
        cout<<"Good\n"<<endl;
    }
    else if(z==50)
    {
        cout<<"Bad\n"<<endl;
    }
    else
    {
        cout<<"Error911\n"<<endl;
    }
/* Here, the output will be Excellent. Eventhough
the 3rd condition is also satisfied because the
compiler only executes the 1st SATISFIED condition
and ignores the rest of the conditions and then
exits the loop.*/
/* If you don't use an 'else', the program will
execute without displaying anything for our case
here. In case none of our conditions were satisfied,
an 'else' will display something to indicate that
something is wrong. */
/* 'if' can be written only once & should be at
the beginning. */
/* 'else if' can be written multiple times & should
be after an 'if'. */
/* 'else' can be written only once & should be at
the end after an 'if'. */
/* 'if' can be written alone without an 'else' or
'else if' but vice-versa is not possible. */

    return 0;
}
