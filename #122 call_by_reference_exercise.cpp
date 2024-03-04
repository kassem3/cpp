/* Call by Reference Exercise */

#include <iostream>
using namespace std;

void apex(int *ptrrr)
{
    *ptrrr= 20000;
    cout<<"Inside apex func: "<<"k is "<<*ptrrr<<endl; //k=20000 [Value of k]

/*The line below will display an error bcz 'k' wasn't declared inside this scope.*/
//    cout<<k;

/*The line below will display the address of 'k' and not the value. In other words, it
will display what's stored inside the pointer 'ptrrr'.*/
//    cout<<ptrrr;

}

int main()
{
    int k= 2;
    cout<<"Before apex func: "<<"k is "<<k<<endl; //k=2
    
    apex(&k); //k=20000
    
    cout<<"After apex func: "<<"k is "<<k<<endl; //k=20000

/*The line below will display the address of 'k' which is the same as the value stored
inside the pointer 'ptrrr'.*/
//    cout<<&k;

    return 0;
}
