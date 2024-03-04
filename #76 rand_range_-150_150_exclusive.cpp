/* Write a complete C/C++ program which will declare an array named arrayA
of size 20 integer numbers. Fill this array with 20 random integer numbers
that range in between -150 and 150 (both numbers are exclusive) via using
a loop. Having done so, iterate and display all even and negative numbers
as output on the screen. (25 points) */


#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main()
{
    // Declare an array of size 20
    int arrayA[20];

    // Seed the random number generator
    srand(time(0));

    // Fill the array with random numbers between -149 and 149
    for (int i = 0; i < 20; i++) {
        arrayA[i] = rand() % 300 - 150;
    }

    // Print all even and negative numbers
    cout << "Even and negative numbers: ";
    for (int i = 0; i < 20; i++) {
        if (arrayA[i] % 2 == 0 && arrayA[i] < 0) {
            cout << arrayA[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

