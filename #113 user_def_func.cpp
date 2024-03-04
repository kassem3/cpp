#include<iostream>
using namespace std;

void fun(); //function declaration
/* Function must be declared before the
main() fuction otherwise, the computer wouldn't
recognise it. If you don't want to declare it,
you can put the entire function before the main()
function and the program will work. */
int main ()
{
fun( );
return 0;
}

void fun()
{
cout<<"This is my user-defined function";
}
