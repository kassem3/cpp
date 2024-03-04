//POINTERS 4

#include<iostream>
using namespace std;

int main()
{
    int w[9]= {9,32,6,11,66,4,29,72,5};
    
    //Displaying values in the array by dereferencing
    for(int i=0; i<9; i++)
    {
        cout<<*(w+i)<<endl;
    }

    cout<<'\n';

    //Displaying addresses of values in the array
    for(int i=0; i<9; i++)
    {
        cout<<&w[i]<<endl;
    }

    cout<<'\n';

//Can't create a pointer before having a variable's address except when:
    int *ptr=NULL;
    cout<<ptr;

    return 0;
}
