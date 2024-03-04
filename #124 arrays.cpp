// ARRAYS

#include<iostream>
using namespace std;

int main()
{
    //The below array can only accept 4 or less integer numbers.
    int x[5] = {11, 22, 33, 44, 55};
    
    //Compiler always counts from 0(index no.).
    cout<<x[0]<<endl;   //11
    cout<<x[4]<<endl;   //55
    

    int abc[3];
    cout<<abc[0]<<endl; //displays 0 since we didn't insert any element in index no.[1].


    int smart[] = {50, 100, 150, 200};
    //If array size isn't set, compiler automatically detects it based on no. of elements.
    cout<<smart[0]<<endl;   //50
    cout<<smart[5]<<endl;   //random no.
    
    return 0;
}
