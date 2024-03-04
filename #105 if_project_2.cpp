// IF Project-2
/* Create a C++ program that checks
the score of a student and grades it. */

#include <iostream>
using namespace std;

int main()
{
    int score;

    cout<<"Enter your score:";
    cin>>score;
    
    if(score>=50 && score<=59)
        cout<<"Your grade is D";
    
    else if(score>=60 && score<=69)
        cout<<"Your grade is C";

    else if(score>=70 && score<=79)
        cout<<"Your grade is B";

    else if(score>=80 && score<101)
        cout<<"Your grade is A";
    
    else
        cout<<"Error: Invalid Score";


    return 0;
}
