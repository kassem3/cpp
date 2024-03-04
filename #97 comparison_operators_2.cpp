// COMPARISON operators 2
// LOGICAL operators ( && , || , !=)

#include <iostream>
using namespace std;

int main()
{
    int x=2;
    int y=4;
    int z=6;
    int e=2;

    /* This is a question meaning: Is z greater
    than y AND Is y greater than x? */
    cout<<(z>y && y>x)<<endl; //1 (True)

    cout<<(z>y && x>y)<<endl; //0 (False)
    // False because NOT ALL conditions are True
    
    cout<<(z>y || x>y)<<endl; //1 (True)
    // True because at least one condition is True
    
    cout<<(10>8 || 10>4)<<endl; //1 (True)

    cout<<(x!=z)<<endl; //1 (True)

    cout<<(x!=e)<<endl; //0 (False)
    // False bcz they're both equal

    cout<<(x!=2)<<endl; //0 (False)


    return 0;
}
