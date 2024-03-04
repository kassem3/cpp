// ARRAYS 2
// Formulas to find the no. of elements of unknown arrays without counting:

    // Formula-1 (any array type):
    //  sizeof(a)/sizeof(a[0]);

    // Formula-2 (int array type only):
    //  sizeof(a)/sizeof(int);

    // Formula-3 (string array type only):
    //  sizeof(a)/sizeof(string);

#include<iostream>
using namespace std;

int main()
{
    float speeds[] = {3.44, 5.36, 6.63, 1.53};
    int marks[] = {43, 55, 32, 24, 50, 98, 74};
    string names[] = {"shaker", "mohsen", "steve"};

    // Direct method:
    cout<<sizeof(speeds)/sizeof(speeds[0])<<endl; //4
    cout<<sizeof(marks)/sizeof(int)<<endl; //7
    cout<<sizeof(names)/sizeof(string)<<endl; //3
    

    // Indirect method:
    int total_speeds = sizeof(speeds)/sizeof(speeds[0]);
    cout<<total_speeds<<endl; //4

    int total_marks = sizeof(marks)/sizeof(int);
    cout<<total_marks<<endl; //7

    int total_names = sizeof(names)/sizeof(string);
    cout<<total_names<<endl; //3


    return 0;
}
