/* Q) Create a user-defined fuction that takes 2 numbers then swaps them. Use
Call by Value method. */

#include <iostream>
using namespace std;

/*Note: Call by value is a "temporary" use of a variable outside its scope.*/
void swap(int x, int y)
{
    int temp;

    temp= x; //temp= 3
    x= y; //x= 9
    y= temp; //y= 3
    
    cout<<"Inside swap func: "<<"x is "<<x<<"     y is "<<y<<endl; //x=9 , y=3
}

int main()
{
    int x= 3;
    int y= 9;
    cout<<"Before swap func: "<<"x is "<<x<<"     y is "<<y<<endl; //x=3 , y=9

    swap(x,y); //x=9 , y=3
    
//x & y values only changed inside the swap() function.

    cout<<"After swap func: "<<"x is "<<x<<"     y is "<<y<<endl; //x=3 , y=9


/*Note: Here, the x & y values didn't get changed permanently unlike in call by reference.*/

    return 0;
}
