/* Q) Write a C++ program that gets 2 numbers & an
operand (+,-,*,/) from the user, calculate & display
the results using the following user-defined functions:
(Hint: Func2 should be called inside of Func1)
Func1: void getNumber();
Func2: double calculate(int num1, int num2, char operand); */

#include <iostream>
using namespace std;

void getNumber(int &num)
{
    cout << "Enter a number: ";
    cin >> num;
}

double calculate(int num1, int num2, char operand)
{
    double result;

    switch (operand)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Cast num1 to double for floating-point division
            result = static_cast<double>(num1) / num2;
            break;
        default:
            cout << "Invalid operator." << endl;
            result = 0;
    }

    return result;
}

void getNumbersAndCalculate()
{
    int num1, num2;
    char operand;

    getNumber(num1);
    getNumber(num2);

    cout << "Enter the operator (+, -, *, /): ";
    cin >> operand;

    double result = calculate(num1, num2, operand);

    cout << "Result: " << num1 << operand << num2 << " = " << result << endl;
}

int main()
{
    getNumbersAndCalculate();

    return 0;
}
