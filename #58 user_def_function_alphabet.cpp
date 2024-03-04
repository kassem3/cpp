/* User Defined Functions */
/* Write a C++ program that gets a character from the user.
According to given character, the program should send this
character to the function & display the rest of the characters
of the alphabet in the function "void showAlphabet(char character)".
If the given character is "z or Z" then the program should display
"Z is the last character in the alphabet". */

#include <iostream>
using namespace std;

void showAlphabet()
{
    char character;
    cout << "Please enter a lowercase character: ";
    cin >> character;

    if (character >= 'a' && character < 'z')
    {
        for (char i = character + 1; i <= 'z'; i++)
        {
            cout << i;
        }
    }
    else if (character == 'z')
    {
        cout << "Z is the last character in the alphabet";
    }
    else
    {
        cout << "Invalid input. Please enter a valid lowercase character from 'a' to 'z'.";
    }
}

int main()
{
    showAlphabet();

    return 0;
}
