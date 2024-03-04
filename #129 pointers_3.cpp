//POINTERS 3

#include<iostream>
using namespace std;

int main()
{
    int e[3]= {4,9,2}; //1D array

    cout<<e<<endl; //address of array (1st element's address)
    cout<<&e<<endl; //address of array (same as e above)
    cout<<'\n';

    cout<<&e[0]<<endl; //address of 4
    cout<<&e[1]<<endl; //address of 9
    cout<<&e[2]<<endl; //address of 2
    
    cout<<"---OR---"<<endl;

    cout<<&e[0]<<endl; //address of 4
    cout<<&e[0]+1<<endl; //address of 9
    cout<<&e[0]+2<<endl; //address of 2
    cout<<'\n';

    cout<<&e+1<<endl; //NOT the address of 9 (Random address)
    cout<<'\n';

    cout<<*e<<endl; //4, This is dereferencing (same as pointers)
    cout<<*(e+1)<<endl; //9, value of 2nd element
    cout<<*(e+2)<<endl; //2, value of 3rd element
    cout<<'\n';

    cout<<*e+1<<endl; //4+1= 5, NOT the 2nd element
    cout<<*e+10<<endl; //4+10= 14, addition operation!

    return 0;
}
