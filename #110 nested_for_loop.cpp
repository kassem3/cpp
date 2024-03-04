//nested for loop

#include<iostream>
using namespace std;

int main()
{
    int week=4;
    int day=7;

    for(int i=1;i<=week;i++)
    {
        cout<<"WEEK: "<<i<<endl;

//we can use 'i' too but better use 'j' or anything else
        for(int j=1;j<=day;j++)
        {
            cout<<"\tday: "<<j<<endl;
        }
    }

    return 0;
}
