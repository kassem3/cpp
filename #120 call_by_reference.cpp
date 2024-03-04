/*Q) Create a user-defined fuction that takes a number & changes its value permanently.
Use Call by value method.*/

#include <iostream>
using namespace std;

/*Note: Call by reference is a "permanent" use of a variable inside its scope.*/
void apex(int *a)
{
    *a= 100;

//Note: If we don't type '*' before 'a' below, the address of 'a' will be displayed
//instead of the value of 'a'.
    cout<<"Inside apex func: "<<"a is "<<*a<<endl; //a=100
}

int main()
{
    int a= 24;
    cout<<"Before apex func: "<<"a is "<<a<<endl; //a=24
    
//apex() takes the address of the variable 'a' inside the main function.
    apex(&a); //a=100
    
//value of variable 'a' changed not only inside the swap() function scope, but also in main.

    cout<<"After apex func: "<<"a is "<<a<<endl; //a=100


/*Note: Here, the values of variable 'a' got changed permanently unlike in call by value.*/

    return 0;
}
