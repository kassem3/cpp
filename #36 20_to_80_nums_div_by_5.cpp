/* Q) Write a C++ code which generates & displays 20
random no.s between 20 & 80 then calculates & displays
the summation of the no.s which are divisible by 5. */

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int num, min = 20, max = 80, sum = 0; // num: stores random no.

    srand(time(NULL));

    for (int i = 1; i <= 20; i++) // i=loop counter
    {
        num = rand() % (max - min + 1) + min;
        cout << "Number-" << i << " : " << num << endl;

        if (num % 5 == 0) // Check if num is divisible by 5
        {
            cout << "Divisible by 5: " << num << endl;
            sum += num;
        }
    }
    cout << "Sum = " << sum << endl;

    return 0;
}
