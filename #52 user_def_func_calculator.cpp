/* Q) Write a C++ code that accepts 2 numbers from the
user and prompts him/her to choose an operator to perform
an operation of addition, subtraction, multiplication or
division using 4 user-defined functions. */

#include<iostream>
using namespace std;

int add(int,int); // don't forget the func. prototype
int subtract(int,int);
int multiply(int,int);
float divide(float,float);

int main()
{
    int num1, num2, choice;
    float result;
    
    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;

    cout<<"Select a choice to perform an operation:\n";
    cout<<"1- Addition\n";
    cout<<"2- Subtraction\n";
    cout<<"3- Multiplication\n";
    cout<<"4- Division\n";
    cin>>choice; // added input for choice
    
    switch(choice) 
    {
        case 1: // changed case to match choice values
            result = add(num1, num2); // store result in a variable
            cout<<"The sum is: "<<result<<endl;
            break;

        case 2:
            result = subtract(num1, num2);
            cout<<"The difference is: "<<result<<endl;
            break;

        case 3:
            result = multiply(num1, num2);
            cout<<"The product is: "<<result<<endl;
            break;

        case 4:
            result = divide(num1, num2);
            if (result!=0) // check if result is not 0 before printing
            {
                cout<<"The quotient is: "<<result<<endl;
            }
            break;

        default:
            cout<<"Invalid choice"<<endl;
            break;
    }
    
    return 0;
}

int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}

int multiply(int a, int b)
{
    return a*b;
}

float divide(float a, float b)
{
    if (b==0)   // division by 0 will cause a crash
    {
        cout<<"Cannot divide by zero"<<endl;
        return 0; // return 0 when to exit the func.
    }
    else
    {
        return a/b;
    }
}

// The only PROBLEM with this code is when you divide
// 0 by any number the output will be 4!
