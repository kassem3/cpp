// nested IF

#include <iostream>
using namespace std;

int main()
{
    int a=100, b=300;
    
    if(a==100)
    {
        if(b==200)
        {
            cout<<"a equal to 100 AND b equal to 200 \n";
        }

        cout<<"a equal to 100 BUT b not equal to 200 \n";
    }


    return 0;
}
